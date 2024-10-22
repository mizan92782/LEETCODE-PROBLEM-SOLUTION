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
    int maxLevelSum(TreeNode* root) {
        
        if(root==NULL) return 0;

        queue<TreeNode*> que;
        que.push(root);

        int Asum=INT_MIN;
    
        int mxlevel=0;
        int clevel=0;
        


        while(!que.empty())
        {     
            int node= que.size();
            int  sum=0;
            clevel++;
             
             for(int i=0;i<node;i++)
             {
               

                sum=sum+que.front()->val;
                
                if(que.front()->right)
                {
                    que.push(que.front()->right);
                } 


                if(que.front()->left)
                {
                    que.push(que.front()->left);
                }   


                que.pop();
             }


             if(sum>Asum)
             {
                Asum=sum;
                mxlevel=clevel;
             }
        }



        return mxlevel;

    }
};