#pragma once
#include "Token.h"
#include <string>
#include <vector>

class Lexer {

private:
	std::string plainText;
	int pos;
	char currentChar;


public:
	Lexer(std::string plainText);

	void removeSpace(std::string &plainText);

	void makeStep();

	std::vector<Token> makeToken();

	Token makeNumber();



};