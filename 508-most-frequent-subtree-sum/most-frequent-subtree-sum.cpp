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

    vector<int>ans;
    unordered_map<int,int>mp;
    int count=1;
    int value=-1;

    int func(TreeNode* root){
        if(root==NULL)
        {
            return 0;
        }

        int l=func(root->left);
        int r=func(root->right);

        int x=l+r+root->val;

        
        //add in map
        mp[x]=mp[x]+1;
        
        //if it ishould enter the vector list
        if(mp[x]==count){
            cout<<"enler list: "<<x<<endl;
            ans.push_back(x);
        }
       
       

        //if get more frequency
        if(mp[x]>count){
           
           cout<<"if it is curent higG : "<<mp[x]<<endl;
            ans.clear();
            ans.push_back(x);
            count=mp[x];
        }


        

        

        return x;


    }
  
    vector<int> findFrequentTreeSum(TreeNode* root) {
         
         if(root==NULL){
             return {};
         }

         func(root);

        


        return ans;

        
    }
};