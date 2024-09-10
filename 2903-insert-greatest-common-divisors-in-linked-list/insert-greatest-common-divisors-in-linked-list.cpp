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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

       if(head==NULL || head->next==NULL) return head;

       ListNode* temp=head;
       while(head->next!=NULL)
       {
            int gcd_=gcd(head->val,head->next->val);
            ListNode* gcdNode=new ListNode(gcd_);

            gcdNode->next=head->next;
            head->next=gcdNode;
            head=gcdNode->next;
       } 


       return temp;
    }
};