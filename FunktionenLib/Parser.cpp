#include "Parser.h"

AbstractExpression* Parser::parse(std::vector<Token> tokens)
{

    removeKlammern(tokens);

	int pos = getPositionOfBestToken(tokens);
	
	Token token = tokens[pos];

		if (token.getRank() == 0)
		{
			if (token.getTyp() == "NUMBER");
			{
				
				return new Number(std::stod(token.getValue()));

			}


		}

		if (token.getRank() == 1)
		{

			

		}


	



    return nullptr;
}
