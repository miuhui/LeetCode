//
//  main.cpp
//  leetcode
//
//  Created by 缪慧 on 3/10/16.
//  Copyright © 2016 miaohui. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <queue>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if (board.size() != 9) {
            return false;
        }
        //scan line by line
        for (int i = 0; i < board.size(); i++) {
            int lenSize =(int) board[i].size();
            if (lenSize != 9) {
                return false;
            }
            vector<char> judgeElementExist;
            judgeElementExist.clear();
            for (int j = 0; j < lenSize; j++) {
                if ((board[i][j] < '0' || board[i][j] > '9' ) && board[i][j] != '.') {
                    return  false;
                }
                if (board[i][j] == '.') {
                    continue;
                }
                vector<char>::iterator it = find(judgeElementExist.begin(), judgeElementExist.end(), board[i][j]);
                if (it == judgeElementExist.end()) {
                    judgeElementExist.push_back(board[i][j]);
                }
                else{
                    return false;
                }
            }
        }
        
        //scan col by col
        for (int i = 0; i < 9; i++) {
            vector<char> judgeElementExist;
            judgeElementExist.clear();
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '.') {
                    continue;
                }
                vector<char>::iterator it = find(judgeElementExist.begin(), judgeElementExist.end(), board[j][i]);
                if (it == judgeElementExist.end()) {
                    judgeElementExist.push_back(board[j][i]);
                }
                else {
                    return false;
                }
            }
        }
        
        //scan every sub_box
        
        for (int i = 0; i <= 6; i += 3) {
            for (int j = 0; j <= 6; j += 3) {
                vector<char> judgeElementExist;
                judgeElementExist.clear();
                for (int k = 0; k < 3; k++) {
                    for (int t = 0; t < 3; t++) {
                        if (board[i+k][j+t] == '.') {
                            continue;
                        }
                        vector<char>::iterator it = find(judgeElementExist.begin(),
                                                      judgeElementExist.end(),
                                                      board[i+k][j+t]);
                        if (it == judgeElementExist.end()) {
                            judgeElementExist.push_back(board[i+k][j+t]);
                        }
                        else {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};



int main() {
    
    return 0;
}
