#pragma once
#include "BinäreOperatoren.h"

//BEGIN CLASS PLUS----------------------------------------------------//
Plus::Plus(AbstractExpression* left, AbstractExpression* right)
{
	this->left = left;
	this->right = right;
}

double Plus::calculateFor(double x)
{
	return left->calculateFor(x) + right->calculateFor(x);
}
//END CLASS PLUS-----------------------------------------------------//



//BEGIN CLASS MINUS----------------------------------------------------//
Minus::Minus(AbstractExpression* left, AbstractExpression* right)
{
	this->left = left;
	this->right = right;
}

double Minus::calculateFor(double x)
{
	return left->calculateFor(x) - right->calculateFor(x);
}
//END CLASS MINUS-----------------------------------------------------//




//BEGIN CLASS MAL----------------------------------------------------//
Mal::Mal(AbstractExpression* left, AbstractExpression* right)
{
	this->left = left;
	this->right = right;
}

double Mal::calculateFor(double x)
{
	return left->calculateFor(x) * right->calculateFor(x);
}
//END CLASS MAL-----------------------------------------------------//




//BEGIN CLASS DIVISION----------------------------------------------------//
Division::Division(AbstractExpression* left, AbstractExpression* right)
{
	this->left = left;
	this->right = right;
}

double Division::calculateFor(double x)
{
	return left->calculateFor(x) / right->calculateFor(x);
}
//END CLASS DIVISION-----------------------------------------------------//
