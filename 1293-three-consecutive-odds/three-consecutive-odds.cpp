class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int x=0;
        for(int i=0;i<arr.size();i++)
        {
             if(arr[i]%2==1){
                x++;
             }else
             {
                x=0;
             }

             if(x==3) return true;
        }


        return false;
    }
};