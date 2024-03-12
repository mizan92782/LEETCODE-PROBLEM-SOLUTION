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
    ListNode* removeZeroSumSublists(ListNode* head) {
        
         ListNode* temp=head;

         vector<int>list;
         while(temp!= NULL){ 
              list.push_back(temp->val);
              temp=temp->next;
         }



         int n=list.size();
         vector<int>dp(n,0);


          

         for(int i=0;i<n;i++)
         {  
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+list[j];

                if(sum==0)
                {
                    fill(dp.begin()+i,dp.begin()+j+1,-1);
                    i=j;
                    
                  
                   break;
                }
            }
         }





        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        temp = dummy;

        // Iterate through the linked list, adjusting pointers to remove zero-sum sublists
        for (int i = 0; i < n; i++) {
            if (dp[i] != -1) {
                temp->next->val = list[i]; // Assign value from list to the linked list
                temp = temp->next;         // Move to next node in the linked list
            }
        }

        // Disconnect the remaining nodes after the last non-zero-sum sublist
        temp->next = nullptr;

        // Return the modified linked list
        return dummy->next;
      
    }
};