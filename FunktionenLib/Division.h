#pragma once
#include "AbstractExpression.h"

class Division : public AbstractExpression {

private: 

	AbstractExpression* left;
	AbstractExpression* right;

public:

	Division(AbstractExpression* left, AbstractExpression* right);
	~Division() {};

	double calculateFor(double x) override;

};
