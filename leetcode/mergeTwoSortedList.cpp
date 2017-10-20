#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode *mergeTwoSortedList(ListNode *l1, ListNode *l2)
{
    if (!l1) return l2;
    if (!l2) return l1;
    if (l1->val > l2->val) {
        l2->next = mergeTwoSortedList(l1, l2->next);
        return l2;
    }
    else {
        l1->next = mergeTwoSortedList(l1->next, l2);
        return l1;
    }
}
int main()
{


    system("pause");
    return 0;
}