#include "FQName.h"

#include <android-base/logging.h>
#include <regex>

#define RE_COMPONENT    "[a-zA-Z_][a-zA-Z_0-9]*"
#define RE_PATH         RE_COMPONENT "([.]" RE_COMPONENT ")*"
#define RE_VERSION      "@[0-9]+[.][0-9]+"

static const std::regex kRE1("(" RE_PATH ")(" RE_VERSION ")?::(" RE_PATH ")");
static const std::regex kRE2("(" RE_VERSION ")::(" RE_PATH ")");
static const std::regex kRE3(RE_PATH);

namespace android {

FQName::FQName(const std::string &s)
    : mValid(false) {
    setTo(s);
}

bool FQName::isValid() const {
    return mValid;
}

bool FQName::setTo(const std::string &s) {
    mPackage.clear();
    mVersion.clear();
    mName.clear();

    mValid = true;

    std::smatch match;
    if (std::regex_match(s, match, kRE1)) {
        CHECK_EQ(match.size(), 6u);

        mPackage = match.str(1);
        mVersion = match.str(3);
        mName = match.str(4);
    } else if (std::regex_match(s, match, kRE2)) {
        CHECK_EQ(match.size(), 4u);

        mVersion = match.str(1);
        mName = match.str(2);
    } else if (std::regex_match(s, match, kRE3)) {
        mName = match.str(0);
    } else {
        mValid = false;
    }

    return isValid();
}

std::string FQName::package() const {
    return mPackage;
}

std::string FQName::version() const {
    return mVersion;
}

std::string FQName::name() const {
    return mName;
}

void FQName::applyDefaults(
        const std::string &defaultPackage,
        const std::string &defaultVersion) {
    if (mPackage.empty()) {
        mPackage = defaultPackage;
    }

    if (mVersion.empty()) {
        mVersion = defaultVersion;
    }
}

std::string FQName::debugString() const {
    CHECK(mValid);

    std::string out = "FQName(";
    out.append(mPackage);
    out.append(mVersion);
    if (!mPackage.empty() || !mVersion.empty()) {
        out.append("::");
    }
    out.append(mName);
    out.append(")");

    return out;
}

}  // namespace android

