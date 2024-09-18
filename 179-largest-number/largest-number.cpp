class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string>numstr;

        for(int n:nums)
        {
            numstr.push_back(to_string(n));
        }



        sort(numstr.begin(),numstr.end(),[](string &a ,string &b){
            return a+b>b+a;
        });


         string s="";
        for(string x: numstr)
        {
           s=s+x;
        }


        return numstr[0]=="0" ? "0" : s;

    }
};