#pragma once
#include "AbstractExpression.h"

class Number : public AbstractExpression {

private: 

	double number;

public:

	Number(double number);
	~Number() {};

	double calculateFor(double x) override;

};