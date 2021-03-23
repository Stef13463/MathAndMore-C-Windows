#include "Lexer.h"

Lexer::Lexer(std::string plainText)
{
	this->plainText = plainText;
	this->pos = -1;
	this->currentChar = ';';
}

void Lexer::removeSpace(std::string &plainText)
{
	for (int i = plainText.size(); i >= 0; i--)
	{

		if (plainText[i] == ' ')plainText.erase(i, 1);

	}
}

void Lexer::makeStep()
{
	pos = pos + 1;

	if (pos < plainText.size())
	{
		currentChar = plainText[pos];

	}
	else
	{
		currentChar = ';';
	}
}
