#pragma once
#include "AbstractExpression.h"

class Plus : public AbstractExpression {

private:
	AbstractExpression* left;
	AbstractExpression* right;

public:

	Plus(AbstractExpression* left, AbstractExpression* right);
	~Plus() {};

	double calculateFor(double x) override; 

	


};