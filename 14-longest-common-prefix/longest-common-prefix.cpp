class Solution {
public:

   

struct Node{
    int count;
    Node* next[26];

    Node()
    {
        count=0;
        for(int i=0;i<26;i++)
        {
            next[i]=NULL;
        }

    }
};


void insert(Node *root,string str)
{
    int len=str.size();

    for(int i=0;i<len;i++)
    {
        int id=str[i]-'a';

        if(root->next[id]==NULL)
        {
             root->next[id]= new Node();
        }

        root->next[id]->count++;

        root=root->next[id];
    }
}



string search(Node *root,string str,int asize)
{
     int len=str.size();

     string ans="";

     for(int i=0;i<len;i++)
     {
           int id=str[i]-'a';

           if(root->next[id]->count!=asize)
           {
            return ans;
           }else
           {
             ans=ans+str[i];
           }

           root=root->next[id];
     }

     return ans;
}





string longestCommonPrefix(vector<string>& strs) {
        
       int asize=strs.size();

       Node* root = new Node();

       for(int i=0;i<asize;i++)
       {
          insert(root,strs[i]);
       }


       return search(root,strs[0],asize);

    }
};