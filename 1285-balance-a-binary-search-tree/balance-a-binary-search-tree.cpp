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

    void sortN(vector<TreeNode*>& node,TreeNode* root)
    {
        if(root==NULL) return;

        sortN(node,root->left);
        node.push_back(root);
        sortN(node,root->right);
    }


    TreeNode* makebbst(vector<TreeNode*>& node,int s,int e){

         if(s>e) return  NULL;
         int m=(s+e)/2;

         TreeNode* root=node[m];

         root->left=makebbst(node,s,m-1);
         root->right=makebbst(node,m+1,e);

         return root;
    }


    TreeNode* balanceBST(TreeNode* root) {

        vector<TreeNode*>node;
        sortN(node,root);

        int e=node.size();

        return makebbst(node,0,e-1);
        
    }
};