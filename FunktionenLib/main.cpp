#include <iostream>
#include "BinäreOperatoren.h"
#include "AbstractExpression.h"
#include "TerminalClasses.h"


int main()
{


	
	


		Number n1 = Number(10);
		Variable var = Variable();

		Plus p = Plus(&n1, &var);

		std::cout << p.calculateFor(33) << std::endl;

		system("PAUSE");
		


	
	

	
	return 0;

}