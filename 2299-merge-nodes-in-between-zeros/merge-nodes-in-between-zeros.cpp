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
    ListNode* mergeNodes(ListNode* head) {
         
         
       ListNode* one=head;
       ListNode* two=one;

       int sum=0;
       head=head->next;
       while(head!=NULL)
       {
           if(head->val==0)
           {
               one->next= new ListNode(sum);
               one=one->next;
               sum=0;
           }else
           {
               sum=sum+head->val;
           }
           head=head->next;
       }

       return two->next;
        
    }
};