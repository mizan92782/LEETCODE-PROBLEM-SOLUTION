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
    void reorderList(ListNode* head) {

        ListNode* temp=head;
        vector<ListNode*>vec;
        ListNode* track=NULL;
        while(temp)
        {
            vec.push_back(temp);
            temp=temp->next;
        }


        int n=vec.size();

        if(n<=1) return ;

        int l=0,r=n-1;

        while(l<r)
        {
            vec[r]->next=NULL;
            vec[l]->next=vec[r];

            if(track!=NULL)
            {
                track->next=vec[l];
            }

            track=vec[r];
           

            l++;
            r--;
             
            
        }


        if(l==r)
        {
             vec[r]->next=NULL;
             vec[r+1]->next=vec[r];
        }

        
        



      head=vec[0];
    }
};