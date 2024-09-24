class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        
            set<int>st;

            for(int i=0;i<arr1.size();i++)
            {
              while(arr1[i])
              {
                st.insert(arr1[i]);
                arr1[i]=arr1[i]/10;
              }
            }



            vector<int>ans;

            for(int i=0;i<arr2.size();i++)
            {
              while(arr2[i])
              {
                if(st.count(arr2[i]))
                {
                         ans.push_back(arr2[i]);
                }

                arr2[i]=arr2[i]/10;
              }
            }



            int x=ans.size();
            sort(ans.begin(),ans.end());


            

            return x==0 ? 0 : to_string(ans[x-1]).size();


    }
};