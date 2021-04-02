#pragma once
#include <string>
#include <vector>
#include "Token.h"


class Lexer {

	std::string plainText;
	std::vector<Token> tokens;


	int size;
	int iter = 0;
	char currentChar;


	void next();
	void createTokens();
	void generateNumberToken();
	void generateVariableToken();
	void generateFunktionToken();
	void generateConstantToken();
	bool isVariable();
	bool isBuchstabe(char c);
	bool isFunktion();
	bool isConstant();
	
public:

	Lexer(std::string plainText);
	~Lexer() {};

	std::vector<Token> getToken();
	

	

};