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

class Stack {
public:
    queue<int> q1, q2;
    
    // Push element x onto stack.
    void push(int x) {
        q1.push(x);
    }
    
    // Removes the element on top of the stack.
    void pop() {
        if (q1.size() == 0 && q2.size() == 0) {
            return;
        }
        else if(q1.size() != 0) {
            while(q1.size() != 1) {
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
        }
        else if (q2.size() != 0) {
            int len =(int) q2.size();
            while(--len) {
                q2.push(q2.front());
                q2.pop();
            }
            q2.pop();
        }
    }
    
    // Get the top element.
    int top() {
        if (q1.size() != 0) {
            while (q1.size() != 1) {
                q2.push(q1.front());
                q1.pop();
            }
            return q1.front();
        }
        else if (q2.size() != 0) {
            int len = (int) q2.size();
            while (--len) {
                q2.push(q2.front());
                q2.pop();
            }
            int result = q2.front();
            if (q2.size() != 1) {
                q2.push(result);
                q2.pop();
            }
            return result;
        }
        return 0;
    }
    
    // Return whether the stack is empty.
    bool empty() {
        return q1.size() == 0 && q2.size() == 0;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top()<<endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.empty() << endl;
    s.pop();
    cout << s.empty() << endl;
    return 0;
}
