#include "Token.h"

Token::Token(std::string typ, std::string value)
{
	this->typ = typ;
	this->value = value;	
	this->hasValue = true;
}

Token::Token(std::string typ)
{
	this->typ = typ;
	this->value = '\0';
	this->hasValue = false;
	

}

std::string Token::getTyp()
{
	return typ;
}

std::string Token::getValue()
{
	if (!hasValue) throw "TOKEN_HAS_NO_VALUE_EXCEPTION";

	return value;
}

