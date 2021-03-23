#pragma once
#include <string>
class Token {

private: 

	std::string type;
	std::string value;
	bool hasValue = false;

public:

	Token(std::string type);
	Token(std::string type, std::string value);
	~Token();



};