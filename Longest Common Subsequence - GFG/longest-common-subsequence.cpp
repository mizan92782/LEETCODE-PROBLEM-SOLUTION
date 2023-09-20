//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int m, int n, string s1, string s2)
    {
         int dpTab[m+1][n+1];
     
     for(int i=0;i<=m;i++)
     {
         for(int j= 0;j<=n;j++)
         {
             

                if(i==0 || j==0)
                {
                    dpTab[i][j]=0;

                }else if (s1[i-1]==s2[j-1])
                {
                      
                      dpTab[i][j]=1+dpTab[i-1][j-1];
                      
                }else{

                    dpTab[i][j]=max(dpTab[i-1][j],dpTab[i][j-1]);
                }

               


         }

        
     }


     return dpTab[m][n];
         
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends