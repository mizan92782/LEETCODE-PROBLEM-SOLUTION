/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* odd= new ListNode(1);
        ListNode* even =new ListNode(0);

        ListNode* oddmarker=odd;
        ListNode* evenmarker=even;


        int index=0;

        while(head)
        {
            if(index%2==0)
            {
                even->next=head;
                even=even->next;
                index++;
            }else
            {

                odd->next=head;
                odd=odd->next;
                index++;

            }


            head=head->next;
        }

        
        if(oddmarker->next)
        {
            even->next=oddmarker->next;
        }

        odd->next=NULL;

        return evenmarker->next;
    }
};