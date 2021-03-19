#include <iostream>
#include "Number.h"
#include "Plus.h"
#include "AbstractExpression.h"


int main()
{

	Number n1 = Number(10);
	Number n2 = Number(8);

	Plus p = Plus(&n1, &n2);

	std::cout << p.calculateFor(1) << std::endl;


	
	return 0;

}