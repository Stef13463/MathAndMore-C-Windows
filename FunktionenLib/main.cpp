#include <iostream>
#include "Number.h"
#include "Plus.h"
#include "AbstractExpression.h"
#include "Variable.h"

int main()
{


	
	{


		Number n1 = Number(10);
		Variable var = Variable();

		Plus p = Plus(&n1, &var);

		std::cout << p.calculateFor(33) << std::endl;


	}
	

	
	return 0;

}