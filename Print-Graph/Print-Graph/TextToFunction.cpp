#include "TextToFunction.h"

void TextToFunction::SetFunction(string Function)
{
	this->_function = Function;
}

int TextToFunction::_powerCalculator(int number, int power)
{
	int returnnumber = number;
	for (int i = power; i > 1; i--)
	{
		returnnumber *= number;
	}
	return returnnumber;
}

void TextToFunction::SetParameter()
{
	string numberString = "";
	string powerString = "";
	string newString = "";
	int power = 0;
	int number = 0;
	int cutPosition = 0;
	bool nextCharisPower = false;
	bool powerFound = false;
	while (this->_function != "")
	{
		for (unsigned int i = 0; i < this->_function.length(); i++)
		{
			if (this->_function[i] != '*') numberString += this->_function[i];
			else break;
		}
		for (unsigned int i = 0; i < this->_function.length(); i++)
		{
			if (nextCharisPower)
			{
				powerString = this->_function[i];
				powerFound = true;
				cutPosition = i;
				break;
			}
			if (this->_function[i] == '^') nextCharisPower = true;
		}
		nextCharisPower = false;
		number = std::stoi(numberString);
		if (powerFound)
		{
			power = std::stoi(powerString);
			switch (power)
			{
			case 4:
				this->_a = number;
				break;
			case 3:
				this->_b = number;
				break;
			case 2:
				this->_c = number;
				break;
			case 1:
				this->_d = number;
				break;
			}
		}
		else this->_e = number;
		powerFound = false;
		for (unsigned int i = ++cutPosition; i < this->_function.length(); i++)
		{
			newString += this->_function[i];
		}
		this->_function = newString;
		newString = "";
		numberString = "";
		powerString = "";
	}
}

int TextToFunction::FunctionValue(int x)
{
	return this->_a * this->_powerCalculator(x, 4) + this->_b * this->_powerCalculator(x, 3) + this->_c * this->_powerCalculator(x, 2) + this->_d * x + this->_e;
}