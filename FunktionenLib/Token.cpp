#include "Token.h"

Token::Token(std::string typ, std::string value)
{
	this->typ = typ;
	this->value = value;
}

Token::Token(std::string typ)
{
	this->typ = typ;
	this->value = "\0";
}

std::string Token::getTyp()
{
	return this->typ;
}

std::string Token::getValue()
{
	return this->value;
}

std::string Token::toString()
{
	return  "TokenTyp: " + typ + " |  TokenValue: " + value;
}
