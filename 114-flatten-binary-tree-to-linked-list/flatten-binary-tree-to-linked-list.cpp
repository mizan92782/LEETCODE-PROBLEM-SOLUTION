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

    void pre_order(TreeNode* root,vector<TreeNode*>& vec)
    {
        if(root==NULL)
        {
            return ;
        }

        vec.push_back(root);
        pre_order(root->left,vec);
        pre_order(root->right,vec);
    }
public:
    void flatten(TreeNode* root) {

        if(root==NULL ) return ;

        vector<TreeNode*>vec;
        vec.push_back(NULL);
        pre_order(root,vec);

        for(int i=1;i<vec.size()-1;i++)
        {
            vec[i]->right=vec[i+1];
            vec[i]->left=NULL;
        }


        return ;
        
    }
};