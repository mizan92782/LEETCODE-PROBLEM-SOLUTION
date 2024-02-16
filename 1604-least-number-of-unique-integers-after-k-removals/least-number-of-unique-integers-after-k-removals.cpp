const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        map<int,int>fre;
        for(int i=0;i<arr.size();i++)
        {
              fre[arr[i]]++;
        }


        multimap<int,int>low;
        for(auto it:fre)
        {
            low.insert({it.second,it.first});
        }

         
        int i=0;
        int sum=0;
        for(auto it:low)
        {
            
            if(sum+it.first>k)
            {
                break;
            }

            sum=sum+it.first;
            i++;
        
        }


        return low.size()-i;


        
    }
};