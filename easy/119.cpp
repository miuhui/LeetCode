#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
    	vector<int> res(rowIndex+1,0);
    	for (int i = 0; i <= rowIndex; i++) {
    		res[rowIndex] = 1;
    		for (int j = rowIndex - 1; j > 0; j--) {
    			res[j] = res[j] + res[j - 1];
			}
			res[0] = 1;
		}
		return res; 
    }
    
};

int main() {
	Solution s;
	vector<int> r = s.getRow(0);
	for (int i = 0; i < r.size(); i++) {
		cout << r[i] << endl;
	}
} 
