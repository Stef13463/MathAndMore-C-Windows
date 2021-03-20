#pragma once
#include "AbstractExpression.h"

class Variable : public AbstractExpression {




public:

	Variable() {};
	~Variable() {};

	
	double calculateFor(double x) override;

};