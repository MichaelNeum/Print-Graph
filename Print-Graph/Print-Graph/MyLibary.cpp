#include "MyLibary.h"

using namespace Constants;

void GraphDrawer::DrawGraph(string function)
{
	TextToFunction TTF;
	TTF.SetFunction(function);
	TTF.SetParameter();
	std::array<int, GraphWidth> ySorted;
	std::array<int, GraphWidth> y;
	for (int i = 0; i < GraphWidth; i++)
	{
		ySorted.at(i) = TTF.FunctionValue(i);
		y.at(i) = TTF.FunctionValue(i);
	}
	std::sort(ySorted.rbegin(), ySorted.rend());
	for (int i = ySorted.at(0); i > -1; i--)
	{
		if (i < 10) { cout << i; cout << "  "; }
		else if (i < 100) { cout << i; cout << " "; }
		else cout << i;
		cout << "|";
		for (int j = 0; j < GraphWidth; j++)
		{
			if (i == y.at(j)) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	cout << "    ";
	for (int i = 0; i < GraphWidth; i++) cout << "-";
	cout << "\n";
}

bool StringChecks::YNCheck(std::string answer)
{
	if (answer == "y") return true;
	else return false;
}