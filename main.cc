#include <iostream>
#include "Scanner.h"
using namespace std;
int main() {
	Scanner scanner;   // define a Scanner object
	while (int token = scanner.lex()) // get all tokens
	{
		string const &text = scanner.matched();
		switch (token) {
		case Scanner::TYPE:
			cout << "TYPE: " << text << '\n';
			break;
		case Scanner::INTEGER_CONSTANT:
			cout << "INTEGER_CONSTANT: " << text << '\n';
			break;
		case Scanner::FLOAT_CONSTANT:
			cout << "FLOAT_CONSTANT: " << text << '\n';
			break;
		case Scanner::IDENTIFIER:
			cout << "IDENTIFIER: " << text << '\n';
			break;
		case Scanner::RETURN:
			cout << "RETURN: " << text << '\n';
			break;
		case '+':
			cout << "plus: " << text << '\n';
			break;
		case '-':
			cout << "minus: " << text << '\n';
			break;
		case '*':
			cout << "multiply: " << text << '\n';
			break;
		case '/':
			cout << "divide: " << text << '\n';
			break;
		case ',':
			cout << "comma: " << text << '\n';
			break;
		case '(':
			cout << "lparen: " << text << '\n';
			break;
		case ')':
			cout << "rparen: " << text << '\n';
			break;
		case '[':
			cout << "sqlparen: " << text << '\n';
			break;
		case ']':
			cout << "sqrparen: " << text << '\n';
			break;
		case '{':
			cout << "curlylparen: " << text << '\n';
			break;
		case '}':
			cout << "curlyrparen: " << text << '\n';
			break;
		case '<':
			cout << "less_than: " << text << '\n';
			break;
		case '>':
			cout << "gre_than: " << text << '\n';
			break;
		case ':':
			cout << "colon: " << text << '\n';
			break;
		case '=':
			cout << "equal: " << text << '\n';
			break;
		case Scanner::OTHERS:
			cout << "OTHERS: " << text << "'\n";
		}
	}
}







/*#include <iostream>
#include "Scanner.h"
#include "Parser.h"
using namespace std;
int main(int argc, char** arg) {
	Parser parser;
	parser.parse();
}*/

