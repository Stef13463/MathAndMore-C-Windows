#include "Division.h"

Division::Division(AbstractExpression* left, AbstractExpression* right)
{
	this->left = left;
	this->right = right;
}

double Division::calculateFor(double x)
{
	return left->calculateFor(x) / right->calculateFor(x);
}
