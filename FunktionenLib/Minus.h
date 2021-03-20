#pragma once
#include "AbstractExpression.h"
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

