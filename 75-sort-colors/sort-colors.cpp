class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int one=0;
        int zero=0;
        int two=0;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            switch(nums[i])
            {
                case 0 :
                 zero++;
                 break;
                case 1 : 
                 one++;
                 break;
                default : two++;
            }
        }


        for(int i=0;i<n;i++)
        {
            if(zero)
            {
                nums[i]=0;
                zero--;
            }else if(one)
            {
                nums[i]=1;
                one--;
            }else
            {
                nums[i]=2;
                two--;
            }
        }
       
    }
};