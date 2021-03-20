#include "Mal.h"

Mal::Mal(AbstractExpression* left, AbstractExpression* right)
{
	this->left = left;
	this->right = right;
}

double Mal::calculateFor(double x)
{
	return left->calculateFor(x) * right->calculateFor(x);
}
