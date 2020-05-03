#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

class GraphDrawer
{
	public:
		void DrawGraph(int k, int d);
};

class StringChecks
{
	public:
		bool YNCheck(std::string answer);
};

namespace Constants
{
	constexpr int GraphWidth = 101;
}

