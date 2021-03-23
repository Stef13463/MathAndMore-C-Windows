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

class Minus :
    public AbstractExpression
{

private:
    AbstractExpression* left;
    AbstractExpression* right;

public:
    Minus(AbstractExpression* left, AbstractExpression* right);
    ~Minus() {};

    double calculateFor(double x) override;


};

class Mal :
    public AbstractExpression
{
private:
    AbstractExpression* left;
    AbstractExpression* right;

public:
    Mal(AbstractExpression* left, AbstractExpression* right);
    ~Mal() {};

    double calculateFor(double x) override;

};

class Division : public AbstractExpression {

private:

    AbstractExpression* left;
    AbstractExpression* right;

public:

    Division(AbstractExpression* left, AbstractExpression* right);
    ~Division() {};

    double calculateFor(double x) override;

};