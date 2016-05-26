//
// Created by 缪慧 on 3/9/16.
//
#include <iostream>
#include <stack>
#include <vector>


using namespace std;


class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    stack<int> min;
    MinStack() {
        s.empty();
        min.empty();
    }

    void push(int x) {
        s.push(x);
        if (min.empty() || x <= min.top()) {
            min.push(x);
        }
    }

    void pop() {
        if (s.top() == min.top()) {
            s.pop();
            min.pop();
        }
        else
        {
            s.pop();
        }
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min.top();
    }
};

int main() {
    auto ms = new MinStack();
    ms->push(-2);
    ms->push(0);
    ms->push(-3);
    cout << ms->getMin() << endl;
    ms->pop();
    cout << ms->top() << endl;
    cout << ms->getMin() << endl;
    return 0;
}
