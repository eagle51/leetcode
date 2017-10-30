#include <iostream>
#include <queue>

using namespace std;
class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q1.pop();
        queue<int> tmp = q1;
        q1 = q2;
        q2 = tmp;
        return top;
    }

    /** Get the top element. */
    int top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int top = q1.front();
        q2.push(q1.front());
        q1.pop();
        queue<int> tmp = q1;
        q1 = q2;
        q2 = tmp;
        return top;
    }

    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
private:
    queue<int> q1, q2;
};
