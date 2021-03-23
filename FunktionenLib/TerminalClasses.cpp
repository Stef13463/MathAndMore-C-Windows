#pragma once
#include "TerminalClasses.h"

//CLASS NUMBER BEGINN ---------------------------------//
Number::Number(double number)
{
	this->number = number;
}

double Number::calculateFor(double x)
{
	return this->number;
}

//CLASS VARIABLE BEGINN ------------------------------//
double Variable::calculateFor(double x)
{
	return x;
}