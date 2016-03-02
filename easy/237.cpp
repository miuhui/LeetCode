#include<stdio.h>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
    	if(node == NULL)
    		return;
    	node -> val = node -> next -> val;
    	node -> next = node -> next -> next;
	}        
};
int main() {
	return 0;
}
