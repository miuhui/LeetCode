#include<stdio.h>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) 
        	return NULL;
        if (head -> next == NULL)
        	return head;
        ListNode* pre = head;
        ListNode* pCur = head->next;		       	
		pre->next = NULL;
		ListNode* tail;
        while(pCur != NULL) {
        	tail = pCur->next;        	
        	pCur->next = pre;        	
        	pre = pCur;
			pCur = tail;        	
		}
		return pre;       
    }
}; 
int main() {
	return 0;
}
