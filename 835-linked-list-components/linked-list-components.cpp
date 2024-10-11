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
    int numComponents(ListNode* head, vector<int>& nums) {
        
        set<int>st(nums.begin(),nums.end());
        
        int count=0;
        while(head)
        {
             if(st.count(head->val)){
                count++;
                 while(head && st.count(head->val))  head=head->next;
             }else
             {
                head=head->next;
             }
        }

        return count;
    }
};