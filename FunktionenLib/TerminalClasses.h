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

class Variable : public AbstractExpression {




public:

	Variable() {};
	~Variable() {};


	double calculateFor(double x) override;

};