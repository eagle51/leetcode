#include <stack>
#include <iostream>

using namespace std;
class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        s1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int tmp = peek();
        s2.pop();
        return tmp;
    }

    /** Get the front element. */
    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                cout << s1.top() << endl;
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return (s1.empty() && s2.empty());
    }
private:
    stack<int> s1, s2;
};

int main()
{
    MyQueue mq;
    mq.push(1);
    mq.push(2);
    cout << mq.peek() << endl;

    system("pause");
    return 0;
}