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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

        
        if (head==NULL || head->next==NULL) return {-1,-1};

        ListNode* temp=head->next;
        int x=head->val;
        int i=2;

        vector<int>pos;

        while(temp->next!=NULL)
        {
            if(( x  > temp->val && temp->val < temp->next->val)  || ( x < temp->val && temp->val > temp->next->val)){
                  pos.push_back(i);
                 
            }

            i++;
            x=temp->val;
            temp=temp->next;
        }

        int n=pos.size();
        if(n<2)
        {
            return { -1, -1};
        }

        int miniv=INT_MAX;
        for(int i=1;i<n;i++)
        {
            miniv=min(miniv,pos[i]-pos[i-1]);
        }

      
        return {miniv,pos[n-1]-pos[0]};

    }
};