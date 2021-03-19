#pragma once
class Parser
{
public:

	virtual ~Parser() {};
	virtual double calculate() const = 0;
	virtual void setVar(double var) const = 0;

		
};

