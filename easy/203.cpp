//
//  main.cpp
//  leetcode
//
//  Created by miaohui on 4/20/16.
//  Copyright © 2016 miaohui. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <algorithm>
#include <sstream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL) {
            return NULL;
        }
        ListNode* cur;
        ListNode* pre;
        while (head != NULL && head->val == val) {
            head = head->next;
        }
        if (head == NULL) {
            return head;
        }
        pre = head;
        cur = head->next;
        while (cur) {
            if (cur->val == val) {
                pre->next = cur->next;
                cur = cur->next;
            }
            else {
                pre = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};
int main(int argc, const char * argv[]) {
    Solution s;
    cout << "" <<endl;
    return 0;
}
