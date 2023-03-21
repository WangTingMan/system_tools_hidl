// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton interface for Bison GLR parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// C++ GLR parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_YY_OUT_SOONG_TEMP_SBOX_112562EDA5E96204D197944B668AA67BD380FC69_OUT_SYSTEM_TOOLS_HIDL_HIDL_GEN_Y_H_INCLUDED
# define YY_YY_OUT_SOONG_TEMP_SBOX_112562EDA5E96204D197944B668AA67BD380FC69_OUT_SYSTEM_TOOLS_HIDL_HIDL_GEN_Y_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <string>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace yy {
#line 101 "system/tools/hidl/hidl-gen_y.h"




  /// A Bison parser.
  class parser
  {
  public:
#ifdef YYSTYPE
# ifdef __GNUC__
#  pragma GCC message "bison: do not #define YYSTYPE in C++, use %define api.value.type"
# endif
    typedef YYSTYPE value_type;
#else
    /// Symbol semantic values.
    union value_type
    {
#line 316 "system/tools/hidl/hidl-gen_y.yy"

    const char *str;
    android::Type* type;
    android::Reference<android::Type>* referenceToType;
    android::ArrayType *arrayType;
    android::TemplatedType *templatedType;
    android::FQName *fqName;
    android::CompoundType *compoundType;
    android::NamedReference<android::Type>* field;
    std::vector<android::NamedReference<android::Type>*>* fields;
    android::EnumValue *enumValue;
    android::ConstantExpression *constantExpression;
    std::vector<android::EnumValue *> *enumValues;
    android::NamedReference<android::Type>* typedVar;
    android::TypedVarVector *typedVars;
    android::Method *method;
    android::CompoundType::Style compoundStyle;
    std::vector<std::string> *stringVec;
    android::AnnotationParam *annotationParam;
    android::AnnotationParamVector *annotationParams;
    android::Annotation *annotation;
    std::vector<android::Annotation *> *annotations;
    android::DocComment* docComment;
    android::DocCommentable* docCommentable;

#line 145 "system/tools/hidl/hidl-gen_y.h"

    };
#endif
    /// Backward compatibility (Bison 3.8).
    typedef value_type semantic_type;

    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        YYEMPTY = -2,
    YYEOF = 0,                     // "end of file"
    YYerror = 256,                 // error
    YYUNDEF = 257,                 // "invalid token"
    MULTILINE_COMMENT = 258,       // "multiline comment"
    DOC_COMMENT = 259,             // "doc comment"
    ENUM = 260,                    // "keyword `enum`"
    EXTENDS = 261,                 // "keyword `extends`"
    FQNAME = 262,                  // "fully-qualified name"
    GENERATES = 263,               // "keyword `generates`"
    IDENTIFIER = 264,              // "identifier"
    IMPORT = 265,                  // "keyword `import`"
    INTEGER = 266,                 // "integer value"
    FLOAT = 267,                   // "float value"
    INTERFACE = 268,               // "keyword `interface`"
    PACKAGE = 269,                 // "keyword `package`"
    TYPE = 270,                    // "type"
    STRUCT = 271,                  // "keyword `struct`"
    STRING_LITERAL = 272,          // "string literal"
    TYPEDEF = 273,                 // "keyword `typedef`"
    UNION = 274,                   // "keyword `union`"
    SAFE_UNION = 275,              // "keyword `safe_union`"
    TEMPLATED = 276,               // "templated type"
    ONEWAY = 277,                  // "keyword `oneway`"
    UNKNOWN = 278,                 // "unknown character"
    LOGICAL_OR = 279,              // LOGICAL_OR
    LOGICAL_AND = 280,             // LOGICAL_AND
    EQUALITY = 281,                // EQUALITY
    NEQ = 282,                     // NEQ
    LEQ = 283,                     // LEQ
    GEQ = 284,                     // GEQ
    LSHIFT = 285,                  // LSHIFT
    RSHIFT = 286,                  // RSHIFT
    UNARY_MINUS = 287,             // UNARY_MINUS
    UNARY_PLUS = 288               // UNARY_PLUS
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::token_kind_type token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 59, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_MULTILINE_COMMENT = 3,                 // "multiline comment"
        S_DOC_COMMENT = 4,                       // "doc comment"
        S_ENUM = 5,                              // "keyword `enum`"
        S_EXTENDS = 6,                           // "keyword `extends`"
        S_FQNAME = 7,                            // "fully-qualified name"
        S_GENERATES = 8,                         // "keyword `generates`"
        S_IDENTIFIER = 9,                        // "identifier"
        S_IMPORT = 10,                           // "keyword `import`"
        S_INTEGER = 11,                          // "integer value"
        S_FLOAT = 12,                            // "float value"
        S_INTERFACE = 13,                        // "keyword `interface`"
        S_PACKAGE = 14,                          // "keyword `package`"
        S_TYPE = 15,                             // "type"
        S_STRUCT = 16,                           // "keyword `struct`"
        S_STRING_LITERAL = 17,                   // "string literal"
        S_TYPEDEF = 18,                          // "keyword `typedef`"
        S_UNION = 19,                            // "keyword `union`"
        S_SAFE_UNION = 20,                       // "keyword `safe_union`"
        S_TEMPLATED = 21,                        // "templated type"
        S_ONEWAY = 22,                           // "keyword `oneway`"
        S_UNKNOWN = 23,                          // "unknown character"
        S_24_ = 24,                              // '?'
        S_25_ = 25,                              // ':'
        S_LOGICAL_OR = 26,                       // LOGICAL_OR
        S_LOGICAL_AND = 27,                      // LOGICAL_AND
        S_28_ = 28,                              // '|'
        S_29_ = 29,                              // '^'
        S_30_ = 30,                              // '&'
        S_EQUALITY = 31,                         // EQUALITY
        S_NEQ = 32,                              // NEQ
        S_33_ = 33,                              // '<'
        S_34_ = 34,                              // '>'
        S_LEQ = 35,                              // LEQ
        S_GEQ = 36,                              // GEQ
        S_LSHIFT = 37,                           // LSHIFT
        S_RSHIFT = 38,                           // RSHIFT
        S_39_ = 39,                              // '+'
        S_40_ = 40,                              // '-'
        S_41_ = 41,                              // '*'
        S_42_ = 42,                              // '/'
        S_43_ = 43,                              // '%'
        S_UNARY_MINUS = 44,                      // UNARY_MINUS
        S_UNARY_PLUS = 45,                       // UNARY_PLUS
        S_46_ = 46,                              // '!'
        S_47_ = 47,                              // '~'
        S_48_ = 48,                              // '#'
        S_49_ = 49,                              // '@'
        S_50_ = 50,                              // '('
        S_51_ = 51,                              // ')'
        S_52_ = 52,                              // ','
        S_53_ = 53,                              // '='
        S_54_ = 54,                              // '{'
        S_55_ = 55,                              // '}'
        S_56_ = 56,                              // ';'
        S_57_ = 57,                              // '['
        S_58_ = 58,                              // ']'
        S_YYACCEPT = 59,                         // $accept
        S_program = 60,                          // program
        S_doc_comment = 61,                      // doc_comment
        S_doc_comments = 62,                     // doc_comments
        S_ignore_doc_comments = 63,              // ignore_doc_comments
        S_valid_identifier = 64,                 // valid_identifier
        S_valid_type_name = 65,                  // valid_type_name
        S_opt_annotations = 66,                  // opt_annotations
        S_annotation = 67,                       // annotation
        S_opt_annotation_params = 68,            // opt_annotation_params
        S_annotation_params = 69,                // annotation_params
        S_annotation_param = 70,                 // annotation_param
        S_annotation_string_value = 71,          // annotation_string_value
        S_annotation_string_values = 72,         // annotation_string_values
        S_error_stmt = 73,                       // error_stmt
        S_require_semicolon = 74,                // require_semicolon
        S_fqname = 75,                           // fqname
        S_fqtype = 76,                           // fqtype
        S_package = 77,                          // package
        S_import_stmt = 78,                      // import_stmt
        S_opt_extends = 79,                      // opt_extends
        S_interface_declarations = 80,           // interface_declarations
        S_declarations = 81,                     // declarations
        S_commentable_declaration = 82,          // commentable_declaration
        S_commentable_type_declaration = 83,     // commentable_type_declaration
        S_type_declaration = 84,                 // type_declaration
        S_type_declaration_body = 85,            // type_declaration_body
        S_interface_declaration = 86,            // interface_declaration
        S_87_1 = 87,                             // $@1
        S_interface_declaration_body = 88,       // interface_declaration_body
        S_typedef_declaration = 89,              // typedef_declaration
        S_const_expr = 90,                       // const_expr
        S_commentable_method_declaration = 91,   // commentable_method_declaration
        S_method_declaration = 92,               // method_declaration
        S_typed_vars = 93,                       // typed_vars
        S_non_empty_typed_vars = 94,             // non_empty_typed_vars
        S_typed_var = 95,                        // typed_var
        S_uncommented_typed_var = 96,            // uncommented_typed_var
        S_struct_or_union_keyword = 97,          // struct_or_union_keyword
        S_named_struct_or_union_declaration = 98, // named_struct_or_union_declaration
        S_99_2 = 99,                             // $@2
        S_struct_or_union_body = 100,            // struct_or_union_body
        S_field_declarations = 101,              // field_declarations
        S_commentable_field_declaration = 102,   // commentable_field_declaration
        S_field_declaration = 103,               // field_declaration
        S_annotated_compound_declaration = 104,  // annotated_compound_declaration
        S_compound_declaration = 105,            // compound_declaration
        S_enum_storage_type = 106,               // enum_storage_type
        S_named_enum_declaration = 107,          // named_enum_declaration
        S_108_3 = 108,                           // $@3
        S_enum_declaration_body = 109,           // enum_declaration_body
        S_commentable_enum_value = 110,          // commentable_enum_value
        S_enum_value = 111,                      // enum_value
        S_enum_values = 112,                     // enum_values
        S_array_type_base = 113,                 // array_type_base
        S_array_type = 114,                      // array_type
        S_type = 115,                            // type
        S_type_or_inplace_compound_declaration = 116 // type_or_inplace_compound_declaration
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;


    /// Build a parser object.
    parser (void* scanner_yyarg, android::AST* const ast_yyarg, android::Scope** const scope_yyarg);
    virtual ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

# if YYDEBUG
  public:
    /// \brief Report a symbol value on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_value_print_ (symbol_kind_type yykind,
                                         const value_type* yyvaluep,
                                         const location_type* yylocationp) const;
    /// \brief Report a symbol on the debug stream.
    /// \param yykind       The symbol kind.
    /// \param yyvaluep     Its semantic value.
    /// \param yylocationp  Its location.
    virtual void yy_symbol_print_ (symbol_kind_type yykind,
                                   const value_type* yyvaluep,
                                   const location_type* yylocationp) const;
  private:
    /// Debug stream.
    std::ostream* yycdebug_;
#endif


    // User arguments.
    void* scanner;
    android::AST* const ast;
    android::Scope** const scope;
  };

} // yy
#line 418 "system/tools/hidl/hidl-gen_y.h"




#endif // !YY_YY_OUT_SOONG_TEMP_SBOX_112562EDA5E96204D197944B668AA67BD380FC69_OUT_SYSTEM_TOOLS_HIDL_HIDL_GEN_Y_H_INCLUDED
