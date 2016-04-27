// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) const
	{
		auto area = (C - A) * (D - B) + (G - E) * (H - F);
		auto h1 = max(A, E);
		auto h2 = min(C, G);
		auto v1 = max(B, F);
		auto v2 = min(D, H);
		if (h2 <= h1 || v2 <= v1)
		{
			return area;
		}
		return area - (h2 - h1)*(v2 - v1);
	}
};

int main()
{	
	Solution s;
	cout << "" << endl;
	getchar();
	return 0;
}
