#pragma once
#include "Parser.h"
#include "Operator.h"
class CompositFunktion :
    public Parser
{
private:

    Parser* left;
    Parser* right;
    Operator* operant;
public:
    CompositFunktion(Parser* left, Parser* right);
    ~CompositFunktion();

    double calculate();
    double setVar(double var);


};