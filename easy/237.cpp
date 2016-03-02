#include<stdio.h>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
    	ListNode* h = node;
    	ListNode* t;
    	while(h -> next != NULL){    		
			t = h -> next;
			int temp = h -> val;
			h -> val = t -> val;
			t -> val = temp;
			t = h;			
			h = h -> next;
    	}
    	t -> next = NULL;
	}        
};
int main() {
	return 0;
}
