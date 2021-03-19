#include "Plus.h"

Plus::Plus(AbstractExpression* left, AbstractExpression* right)
{
	this->left = left;
	this->right = right;
}

double Plus::calculateFor(double x) 
{
	return left->calculateFor(x) + right->calculateFor(x);
}
