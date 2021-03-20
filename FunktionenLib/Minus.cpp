#include "Minus.h"

Minus::Minus(AbstractExpression* left, AbstractExpression* right)
{
    this->left = left;
    this->right = right;
}

double Minus::calculateFor(double x)
{
    return left->calculateFor(x) - right->calculateFor(x);
}
