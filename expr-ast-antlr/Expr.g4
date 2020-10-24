grammar Expr;

start           :   interlist EOF  
                ;

interlist       :   inter   #interlist_inter
                |   interlist inter #interlist_interlist_inter
                ;

inter           :   parameter_list  #inter_parameter_list
                |   func_def    #inter_funcdef
                ;

expression      :   NUMBER  #expression_NUMBER_tag
                |   IDENTIFIER  #expression_IDENTIFIER_tag
                |   STRING_LITERAL  #expression_STRING_LITERAL_tag
                |   CHAR    #expression_CHAR_tag
                |   array   #expression_array_tag
                |   func_call   #expression_func_call_tag
                |   '(' expression ')'  #expression_brackets_expression_tag
                |   <assoc=right>   '-' expression  #expression_unary_minus_tag
                |   <assoc=right>   '!' expression  #expression_unary_excl_tag
                |   <assoc=left>    expression '*' expression   #expression_binary_mul_tag
                |   <assoc=left>    expression '/' expression   #expression_binary_div_tag
                |   <assoc=left>    expression '+' expression   #expression_binary_add_tag
                |   <assoc=left>    expression '-' expression   #expression_binary_sub_tag
                |   expression '<=' expression  #expression_binary_le_tag
                |   expression '<' expression   #expression_binary_less_tag
                |   expression '>=' expression  #expression_binary_ge_tag
                |   expression '>' expression   #expression_binary_great_tag
                |   <assoc=left>    expression '==' expression  #expression_binary_exactly_equal_tag
                |   <assoc=left>    expression '!=' expression  #expression_binary_not_equal_tag  
                |   <assoc=left>    expression 'and' expression #expression_binary_logical_and_tag
                |   <assoc=left>    expression 'or' expression  #expression_binary_logical_or_tag
                |   <assoc=right>   expression '=' expression   #expression_binary_assign_tag
                ;
    
ternary_opr     :   <assoc=right>   'check' expression 'yes' expression 'no' expression ';' #ternary_opr_tag
                ;

expression_stmnt:   ';' #expression_stmnt_semicolon
                |   expression ';' #expression_stmnt_expression
                ;

selection_stmnt :   'if' expression compound_stmnt   #selection_stmnt_if_wo_else
                |   'if' expression compound_stmnt 'else' compound_stmnt  #selection_stmnt_if_w_else
                ;

iterative_stmnnt:   'while' expression compound_stmnt    #iterative_stmnnt_while
                |   'for' '(' local_param_list expression_stmnt expression ')' compound_stmnt #iterative_stmnnt_for
                ;

jump_stmnt      :   'continue' ';'  #jump_stmnt_continue
                |   'break' ';' #jump_stmnt_break
                |   'return' expression_stmnt   #jump_stmnt_return
                ;

statement_list  :   statement   #statement_list_statement
                |   statement_list statement    #statement_list_list_stmnt
                ;

datatype        :   'int'   #datatype_int
                |   'uint'  #datatype_uint
                |   'char'  #datatype_char
                |   'bool'  #datatype_bool
                |   'void'  #datatype_void
                ;

array           :   IDENTIFIER '[' expression ']'   #array_1d
                |   IDENTIFIER '[' expression '][' expression ']'   #array_2d
                ;

arg_decl        :   datatype IDENTIFIER #arg_decl_dtID
                |   #arg_decl_empty
                ;

initialization  :   expression  #initialization_expr
                ;
declinfo        :   IDENTIFIER  #declinfo_id
                |   IDENTIFIER '=' initialization #declinfo_id_init
                |   IDENTIFIER '[' expression ']'   #declinfo_array_1d
                |   IDENTIFIER '[' expression '][' expression ']'   #declinfo_array_2d
                ;
declist         :   declinfo    #declist_declinfo
                |   declist ',' declinfo    #declist_list_info
                ;
parameter_list  :   datatype declist ';' #parameter_decl_data_expression
                ;

local_param_list:   datatype declist ';' #local_param_list_data_list
                ;

function_args   :   arg_decl    #function_args_argdecl
                |   function_args ',' arg_decl  #function_args_args_argdecl
                ;
idlist          :   expression  #idlist_expression
                |   idlist ',' expression   #idlist_list_expr
                |   #idlist_empty
                ;  

func_def        :   datatype IDENTIFIER  '(' function_args ')'  compound_stmnt    #func_def_definition
                ;
            
func_call       :   IDENTIFIER '(' idlist ')'    #func_call_called
                ;

compound_stmnt  :   '{' '}' #compound_stmnt_blank
                |   '{' statement_list '}'  #compound_stmnt_list
                ;

statement       :   selection_stmnt     #statement_selection
                |   iterative_stmnnt    #statement_iterative
                |   compound_stmnt      #statement_compound
                |   expression_stmnt    #statement_expression 
                |   local_param_list    #statement_localparamlist  
                |   jump_stmnt          #statement_jump
                |   ternary_opr         #statement_ternary
                ;


/*Tokens*/

IDENTIFIER  : [a-zA-Z][a-zA-Z0-9_]*;
NUMBER : [0-9]+;
CHAR : '\''.'\'';
STRING_LITERAL : '"' ( '\\' [btnfr"'\\] | ~[\r\n\\"] )* '"';
COMMENT : '//' ~[\r\n]*->skip; 
NS : [ \t\n]+ -> skip;  