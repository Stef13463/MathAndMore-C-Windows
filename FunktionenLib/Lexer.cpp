#include "Lexer.h"

Lexer::Lexer(std::string plainText)
{
	this->plainText = plainText;
	this->size = plainText.size();
	this->iter = -1;
	next();
	createTokens();  
}

void Lexer::next()
{	
	iter++;
	if (iter < size)
	{
		currentChar = plainText[iter];

	}
	else
	{
		currentChar = '\0';
	}

}

void Lexer::generateNumberToken()
{
	std::string currentNumber_string;
	currentNumber_string.push_back(currentChar);
	next();

	while (isdigit(currentChar) || currentChar == '.')
	{
		currentNumber_string.push_back(currentChar);
		next();
	}

	tokens.push_back(Token("NUMBER", currentNumber_string));
	
}

bool Lexer::isVariable()
{
	if (!isBuchstabe(currentChar))return false;
	if (plainText[iter + 1] != '_') return false;
	return true;


}

bool Lexer::isBuchstabe(char c)
{
	
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return true;
	}

	return false;

}

void Lexer::generateFunktionToken()
{
	std::string currentFunktion;
	currentFunktion.push_back(currentChar);
	next();
	while (isBuchstabe(currentChar))
	{
		currentFunktion.push_back(currentChar);
		next();
	}

	if (currentChar == '(') currentFunktion.push_back(currentChar);
	next();
	int Klammern = 1;
	
	while (Klammern != 0)
	{
		if (currentChar == ')') Klammern--;
		if (currentChar == '(') Klammern++;

		currentFunktion.push_back(currentChar);
		next();
	}

	tokens.push_back(Token("FUNKTION", currentFunktion));

}

void Lexer::generateVariableToken()
{
	std::string currentVariableName;
	currentVariableName.push_back(currentChar);
	next();
	if (currentChar == '_')
	{
		currentVariableName.push_back(currentChar);
		next();

		while (isBuchstabe(currentChar) || isdigit(currentChar) || (currentChar == '_'))
		{
			currentVariableName.push_back(currentChar);
			next();
		}

	}

	tokens.push_back(Token("VARIABLE", currentVariableName));
}

void Lexer::generateConstantToken()
{
	std::string currentVariableName;
	currentVariableName.push_back(currentChar);
	next();
	while(isBuchstabe(currentChar))
	{
		currentVariableName.push_back(currentChar);
		next();

	}
	tokens.push_back(Token("CONSTANT", currentVariableName));
}

bool Lexer::isFunktion()
{
	if (!isBuchstabe(currentChar)) return false;
	int LKlammer = 0;
	int RKlammer = 0;
	int i = 1;
	while (isBuchstabe(plainText[iter + i])) i++; 
	
	if (plainText[iter + i] != '(') return false;

	return true;


}

bool Lexer::isConstant()
{
	if(currentChar == '$')
	{
		
		return true;
			
	}
	return false;
}



void Lexer::createTokens()
{	
		
	while (currentChar != '\0')
	{
		if (currentChar == ' ') next();

		else if (isdigit(currentChar))
		{
			generateNumberToken();			
		}

		else if (currentChar == '+')
		{
			tokens.push_back(Token("PLUS"));
			next();
		}

		else if (currentChar == '-')
		{
			tokens.push_back(Token("MIUNS"));
			next();
		}

		else if (currentChar == '*')
		{
			tokens.push_back(Token("MAL"));
			next();
		}

		else if (currentChar == '/')
		{
			tokens.push_back(Token("DIVIDIERT"));
			next();
		}
		
		else if (currentChar == '^')
		{
			tokens.push_back(Token("POTENZ"));
			next();
		}

		else if (currentChar == '(')
		{
			tokens.push_back(Token("KLAMMER_AUF"));
			next();
		}
		
		else if (currentChar == ')')
		{
			tokens.push_back(Token("KLAMMER_ZU"));
			next();
		}
		

		else if (isFunktion())
		{

			generateFunktionToken();

		}
		else if (isConstant())
		{
			generateConstantToken();
		}
		else if (true)
		{
			generateVariableToken();
		}
		else
		{
			throw "SYNTAX_FEHLER_EXCEPTION";
		}

	}
	

	
}


std::vector<Token> Lexer::getToken()
{
	return tokens;
}