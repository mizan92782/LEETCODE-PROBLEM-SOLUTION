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





        temp=head;
        ListNode* tem2=NULL;
        for(int i=0;i<n;i++)
        {
            if(dp[i]==0)
            {
                temp->val=list[i];
                tem2=temp;
                temp=temp->next;
            }
        }


        if(tem2!=NULL)
        {
            tem2->next=NULL;
        }

        if(tem2==NULL) return NULL;

      

      

       


        return head;
      
    }
};