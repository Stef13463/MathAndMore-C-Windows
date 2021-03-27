#pragma once
#include "AbstractExpression.h"
#include <vector>
#include <string>
#include "Token.h"
#include "UnäreOperatoren.h"
#include "TerminalClasses.h"
class Parser
{

public:
	Parser() {};
	~Parser() {};

	AbstractExpression* parse(std::vector<Token> tokens);

	void static removeKlammern(std::vector<Token> &tokens);

	int static getPositionOfBestToken(std::vector<Token> tokens)

};