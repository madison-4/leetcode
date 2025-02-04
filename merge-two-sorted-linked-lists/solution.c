#include<stdio.h>
#include<stdlib.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    typedef struct ListNode list;
    list *head1 = list1, *head2 = list2, *dummy, *temp;

    dummy = malloc(sizeof(list));
    temp = dummy;
    while (head1 && head2)
    {
        if (head1->val < head2->val)
        {
            temp->next = head1;
            temp = head1;
            head1 = head1->next;
        }
        else
        {
            temp->next = head2;
            temp = head2;
            head2 = head2->next;
        }
    }
    if (head1)
    {
        temp->next = head1;
    }
    else
    {
        temp->next = head2;
    }
    return (dummy->next);
}
