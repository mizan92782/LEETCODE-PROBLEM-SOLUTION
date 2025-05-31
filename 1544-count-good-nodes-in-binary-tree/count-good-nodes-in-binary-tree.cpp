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
    int goodNodes(TreeNode* root) {
        
        if(root==NULL) return 0;
        int count=0;
        queue<pair<TreeNode*,int>>que;

        que.push({root,INT_MIN});
        
        

        while(!que.empty()){

            TreeNode* x=que.front().first;
            int val=que.front().second;
            que.pop();

            if(val<=x->val){

                cout<< val<< " __> "<<x->val<<endl;
                count++;
                val=x->val;
            }

            if(x->left){
                que.push({x->left,val});
            }


             if(x->right){
                que.push({x->right,val});
            }
        }


        return count;
    }
};