const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();



class Solution {
public:

struct stu{
     int index;
     int value;
};

     static bool com(stu x,stu y){ return x.value< y.value;}

    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
             int n=groupSizes.size();

            struct stu arr[n];
            for(int i=0;i<n;i++)
            {
                arr[i].index=i;
                arr[i].value=groupSizes[i];
            }

            sort(arr,arr+n,com);

            vector<vector<int>>ans;
            vector<int>Ans;

             int i=0;

             for(int j=0;j<n;j++)
             {
                 
                Ans.push_back(arr[j].index);

                 if(Ans.size()==arr[j].value)
                 {
                     ans.push_back(Ans);
                     Ans.clear();
                 }
             }

             




             return  ans;


    }
};