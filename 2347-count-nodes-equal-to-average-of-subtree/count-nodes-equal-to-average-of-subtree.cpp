/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    pair<int,int> count(TreeNode* root,int& cnt)
    {
        if(root==NULL) return {0,0};

        pair<int,int>l=count(root->left,cnt);
        pair<int,int>r=count(root->right,cnt);

        int n=l.second+r.second+1;
        int v=l.first+r.first+root->val;

        if((v/n)==root->val) cnt++;

        return {v,n};


    }

    int averageOfSubtree(TreeNode* root) {

        int cnt=0;
        count(root,cnt);

        return cnt;
        
    }
};