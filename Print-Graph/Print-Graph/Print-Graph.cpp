
#include "MyLibary.h"
#include "MyNamespaces.h"

using namespace Variables;

int main()
{
	GraphDrawer Graph;
	StringChecks SC;

	Values:
	cout << "This is a program which can print a graph! (Example: 12*x^4+10*x^1)" << endl;
	cout << "Type in your function like the example above! (Max power = 4)";
	cin >> function;
	cout << "Draw graph? [y/n]";
	cin >> answer;
	if (!SC.YNCheck(answer)) goto Values;
	Graph.DrawGraph(function);
	cout << "Do you want to draw another one? [y/n]";
	cin >> answer;
	if (SC.YNCheck(answer)) goto Values;
	return 0;
}


