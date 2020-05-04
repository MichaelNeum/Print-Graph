#include <iostream>
#include <array>
#include <algorithm>
#include <string>

using namespace std;

class TextToFunction
{
	public:
		void SetFunction(std::string Function);
		int FunctionValue(int x);
		void SetParameter();
	private:
		std::string _function;
		int _powerCalculator(int number, int power);
		int _a = 0;
		int _b = 0;
		int _c = 0;
		int _d = 0;
		int _e = 0;
};