
// There may be some flexer directives here

%%
[ \t]                                    //skip
[0-9]+           			    			return INTEGER_CONSTANT;
[0-9]*"."[0-9]+				    			return FLOAT_CONSTANT;
INT|VOID|FLOAT			                    return TYPE;
[a-zA-Z_]+[a-zA-Z0-9_]*			    		return IDENTIFIER;
RETURN					    				return RETURN;
OR_OP|AND_OP|EQ_OP|NE_OP|LE_OP|GE_OP|INC_OP       return LOG_OPERANDS;
"+"                                         return '+';
"-"					    					return '-';
"*"                                         return '*';
"/"					    					return '/';
","                                         return ',';
"("                                         return '(';
")"                                         return ')';
"["                                         return '[';
"]"                                         return ']';
"{"                                         return '{';
"}"                                         return '}';
"<"                                         return '<';
">"                                         return '>';
":"                                         return ':';
"="					    return '=';
"\n"                                        return '\n';
.                                           return OTHERS;                                          

