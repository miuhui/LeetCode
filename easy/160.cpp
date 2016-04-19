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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        int lenA = 0, lenB = 0;
        ListNode *pCurA = headA;
        ListNode *pCurB = headB;
        while (pCurA != NULL) {
            lenA++;
            pCurA = pCurA->next;
        }
        while (pCurB != NULL) {
            lenB++;
            pCurB = pCurB->next;
        }
        pCurA = headA;
        pCurB = headB;
        if(lenB > lenA) {
            int steps = lenB - lenA;
            while(steps > 0) {
                pCurB = pCurB -> next;
                steps--;
            }
        }
        else if (lenA > lenB) {
            int steps = lenA - lenB;
            while(steps > 0) {
                pCurA = pCurA -> next;
                steps--;
            }            
        }
        while(pCurA != NULL && pCurB != NULL) {
            if (pCurA->val == pCurB->val) {
                return pCurA;
            }
            pCurA = pCurA->next;
            pCurB = pCurB->next;
        }
        return NULL;
    }
};




int main() {
    
    return 0;
}
