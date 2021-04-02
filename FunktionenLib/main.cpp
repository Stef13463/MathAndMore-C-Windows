#include <iostream>
#include "Lexer.h"



int main()
{

	
	
	try
	{
		Lexer lex = Lexer("4 $pi * x");
		auto tokens = lex.getToken();

		for (int i = 0; i < tokens.size(); i++)
		{
			std::cout << tokens[i].toString() << std::endl;

		}

	}
	catch (...)
	{
		std::cout << "Fehler";
	}
	
	
	

		std::cout << std::endl;
	//	system("PAUSE");
		


	
	

	
	return 0;

}