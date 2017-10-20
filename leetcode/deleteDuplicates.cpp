#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
//ACËã·¨
ListNode* deleteDuplicates(ListNode* head) 
{
    ListNode *p, *q;
    if (!head) return head;
    p = head;
    while (p->next != NULL) {
        q = p->next;
        if (q->val == p->val) {
            p->next = q->next;
            delete q;
        }
        else
            p = p->next;
    }
    return head;
}