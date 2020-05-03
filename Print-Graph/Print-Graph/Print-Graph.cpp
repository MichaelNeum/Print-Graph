
#include "MyLibary.h"
#include "MyNamespaces.h"

using namespace Variables;

int main()
{
	GraphDrawer Graph;
	StringChecks SC;

	Values:
	cout << "This is a program which can print a linear graph! (y(x) = k * x + d)" << endl;
	cout << "Choose a value for your startpoint (d): ";
	cin >> d;
	cout << "Choose how steep the funktion should be (k): ";
	cin >> k;
	cout << "Draw graph? [y/n]";
	cin >> answer;
	if (!SC.YNCheck(answer)) goto Values;
	Graph.DrawGraph(k, d);
	cout << "Do you want to draw another one? [y/n]";
	cin >> answer;
	if (SC.YNCheck(answer)) goto Values;
	return 0;
}


