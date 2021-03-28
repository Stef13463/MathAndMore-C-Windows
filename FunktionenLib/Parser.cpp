/*

#include "Parser.h"

Parser::Parser(std::vector<Token> tokens)
{
	this->tokens = tokens;
}

AbstractExpression* Parser::getTree(std::vector<Token> tokens)
{
	removeUnnecessaryBrackets(tokens);
	int bestOperator = findBestOperator(tokens);

	Token bestToken  = tokens[bestOperator];

	if (bestToken.getTyp() == "NUMBER")
	{
		double number = std::stod(bestToken.getTyp());

		return new Number(number);

	}

	if (bestToken.getTyp() == "VARIABLE")
	{
		return new Variable();
	}

	if (bestToken.getTyp() == "FUNKTION")
	{
		return new IntermidiateFunktion()

	}


}
*/