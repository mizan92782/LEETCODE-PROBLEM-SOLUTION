class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        
        int n=colors.size();
        int co=0;

        for(int i=2;i<=n+1;i++)
        {
             int a=colors[((i-2)%n)];
             int b=colors[((i-1)%n)];
             int c=colors[((i)%n)];

              cout<<a<<" "<<b<<" "<<c<<endl;
             if(a==c && b!=c)
             {
                co++;
             }
        }


        return co;
    }
};