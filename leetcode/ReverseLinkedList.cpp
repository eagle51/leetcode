#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
//我的算法,额外节点为3
ListNode* reverseList(ListNode* head)
{
    if (head == NULL)
        return head;
    ListNode *p1, *p2, *p3;
    p1 = head;
    p2 = p1->next;
    while (p2 != NULL) {
        p3 = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p3;
    }
    head->next = NULL;
    return p1;
}
//leetCode最快算法，额外结点为2
ListNode* reverseList2(ListNode* head) 
{
    ListNode* ptr = NULL;
    while (head)
    {
        auto tnode = head;
        head = head->next;

        tnode->next = ptr;
        ptr = tnode;
    }
    return ptr;
}
int main()
{
    system("pause");
    return 0;
}