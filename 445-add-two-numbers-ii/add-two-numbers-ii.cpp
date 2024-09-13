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


  
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        

        stack<int>s1;
         while(l1)
         {
           s1.push(l1->val);
           l1=l1->next;

         }


         stack<int>s2;
         while(l2)
         {
           s2.push(l2->val);
           l2=l2->next;

         }


        
       
        

         ListNode* ans= new ListNode(0);

         while(!s1.empty() || !s2.empty())
         {
            int sum=0;

             if(!s1.empty()){
                 sum=sum+s1.top();
                 s1.pop();
             }


             if(!s2.empty()){
                 sum=sum+s2.top();
                 s2.pop();
             }



               
                int x=(sum+ans->val);

                ans->val=x%10;
                x=x/10;


                ListNode* head = new ListNode(x);
                head->next=ans;
                ans=head;


         }



          if(ans->val==0) ans=ans->next;
         return ans;








    }
};