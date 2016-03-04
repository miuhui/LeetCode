#include<stdio.h>


struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL) 
			return head;
		ListNode* first = head;
		ListNode* second = head->next;
		ListNode* temp = second;
		while(second&&second->next) {
			first->next = second->next;
			first = second->next;
			second->next = first->next;
			second = first->next;
		} 
		first->next = temp;
		return head;
    }
};
int main() {
	return 0;
}
