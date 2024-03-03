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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        vector<ListNode*>list;
        ListNode* temp=head;
        
        while(temp)
        {
            list.push_back(temp);
            temp=temp->next;
        }

        int x=list.size();
        
        if(n>x)
        {
            return NULL;
        }

        if(n==x)
        {
           
            return list[0]->next;
        }

        if(n==1)
        {
           
          

         list[x-2]->next=NULL;
         return list[0];
        }


        list[x-n-1]->next=list[x-n-1]->next->next;

        return list[0];



    }
};