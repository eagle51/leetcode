#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* removeElements(ListNode* head, int val) 
{
    ListNode *p = head;
    if (!p)
        return p;
    ListNode a(0);
    ListNode *q = &a;
    q->next = p;
    while (p != NULL) {
        if (p->val == val) {
            q->next = p->next;
            p = q->next;
        }
        else {
            q = p;
            p = p->next;
        }
    }
    return a.next;
}
//leetCode上最快算法
ListNode* removeElements2(ListNode* head, int val) {
    ListNode *l1 = head;
    if (head == NULL) return NULL;
    while (l1->next != NULL)
    {
        if (l1->next->val == val) l1->next = l1->next->next;
        else l1 = l1->next;
    }
    return head->val == val ? head->next : head;
}
int main()
{
    system("pause");
    return 0;
}