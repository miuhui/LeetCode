// leetcode.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

	static int kthSmallest(vector<vector<int>>& matrix, int k) {		
		auto n = matrix.size();
		vector<int> matrix2Vector;
		for (auto i = 0; i < n; i++)
			for (auto j = 0; j < n; j++)
				matrix2Vector.push_back(matrix[i][j]);
		sort(matrix2Vector.begin(), matrix2Vector.end());
		return matrix2Vector[k - 1];
	}
};

int main()
{	
	Solution s;	
	vector<vector<int>> matrix = { {1,5,9},{10,11,13},{12,13,15} };
	cout << s.kthSmallest(matrix, 8) << endl;
	getchar();
	return 0;
}
