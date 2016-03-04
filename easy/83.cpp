#include<stdio.h>


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    	if (head == NULL || head->next == NULL) {
    		return head;
		}
        ListNode* first = head;
        ListNode* second = first->next;
		while(second != NULL) {
			if(second->val == first->val) {				
				first->next = second->next;
				second = second->next;								
			}
			else {
				first = second;
				second = second->next;
			}
		}		        
		return head;
    }
}; 
int main() {
	return 0;
}
