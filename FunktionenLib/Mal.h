#pragma once
#include "AbstractExpression.h"
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

