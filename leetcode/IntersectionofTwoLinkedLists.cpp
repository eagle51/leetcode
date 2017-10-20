#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (!headA || !headB)
        return NULL;
    int lenA = 0;
    int lenB = 0;
    ListNode *p = headA;
    ListNode *q = headB;
    while (p != NULL) {
        lenA++;
        p = p->next;
    }
    while (q != NULL) {
        lenB++;
        q = q->next;
    }
    p = headA;
    q = headB;
    while (p && q) {
        if (p == q)
            return q;
        if (lenA > lenB) {
            p = p->next;
            lenA--;
        }
        else if (lenA < lenB) {
            q = q->next;
            lenB--;
        }
        else {
            p = p->next;
            q = q->next;
        }
    }
    return NULL;
}
int main()
{

    system("pause");
    return 0;
}