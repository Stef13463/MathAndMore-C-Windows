#pragma once
#include <string>
class Token{
private:

	std::string typ;
	std::string value;

public:

	Token(std::string typ, std::string value); //TOKENTYPS: "NUMBER" "FUNKTION" "VARIBLE" "PLUS" "MAL"
	Token(std::string typ);
	~Token() {};

	std::string getTyp();
	std::string getValue();
	std::string toString();

};
