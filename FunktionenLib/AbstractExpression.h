#pragma once
class AbstractExpression {

public:

	double virtual calculateFor(double x) = 0;
	~AbstractExpression() {};

};