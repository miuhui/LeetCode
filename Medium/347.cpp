//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    static vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> timesOfNums;
        vector<int> result;
        vector<pair<int,int>> tpair;
        for (int i = 0; i < nums.size(); ++i) {
            if (timesOfNums.find(nums[i]) != timesOfNums.end()) {
                timesOfNums[nums[i]] += 1;
            }
            else {
                timesOfNums[nums[i]] = 1;
            }
        }
        for (auto it = timesOfNums.begin(); it != timesOfNums.end() ; it++) {
            tpair.push_back(make_pair(it->first,it->second));
        }
        sort(tpair.begin(),tpair.end(),cmp);
        for (int j = 0; j < k && j < tpair.size(); ++j) {
            result.push_back(tpair[j].first);
        }
        return result;
    }

    static int cmp(const pair<int,int>& pair1, const pair<int,int>& pair2) {
        return pair1.second > pair2.second;
    }
};

int main() {
    vector<int> prices = {2,2,1,1,3,3,3};
    Solution s;
    auto result = s.topKFrequent(prices,2);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    return 0;
}

