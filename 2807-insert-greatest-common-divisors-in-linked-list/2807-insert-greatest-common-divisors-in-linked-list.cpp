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


   int gcd(int a, int b)
    {
    // Find Minimum of a and b
    int result = min(a, b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
 
    // Return gcd of a and b
    return result;
    }
 
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
      ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
      ListNode* temp=head;

      while(temp->next!=NULL)
      {
           ListNode* x= new ListNode(gcd(temp->val,temp->next->val));
           ListNode* y= temp->next;
           temp->next=NULL;
           temp->next=x;
           x->next=y;

           temp=temp->next->next;



      }


      return head;
     
    }
};