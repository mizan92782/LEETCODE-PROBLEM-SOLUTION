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

 const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();




class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        if(root==NULL)
        {
            return root;
        }

       TreeNode* r=root->right;
       TreeNode* l=root->left;

        root->right=invertTree(l);
        root->left=invertTree(r);

        return root;
    }
};