/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

       set<ListNode*>myset;

       while(head)
       {
            if(myset.count(head))
            {
                return head;
            }else
            {
                myset.insert(head);
            }




            head=head->next;
       }




        return NULL;
        
    }
};