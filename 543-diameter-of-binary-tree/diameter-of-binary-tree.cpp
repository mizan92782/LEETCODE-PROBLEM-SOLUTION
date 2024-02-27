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
     int maxi=-1;
    int mh(TreeNode* root)
    {
        if(root==NULL) return 0;

        int l=mh(root->right);
        int r=mh(root->left);

        maxi=max(maxi,l+r);

        return 1+max(l,r);
    }


    int diameterOfBinaryTree(TreeNode* root) {
          
        

         mh(root);

         return maxi;
    }
};