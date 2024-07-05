class Solution {
public:

    static bool srtclm(vector<int>& x,vector<int>& y)
    {
        return x[1]>y[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),srtclm);

      

        int gs=0;
        int gn=0;

        for(int i=0;i<boxTypes.size();i++)
        {
                if((gs+boxTypes[i][0])<=truckSize)
                {
                    
                    gs=gs+boxTypes[i][0];
                    gn=gn+(boxTypes[i][1]*boxTypes[i][0]);
                    cout<<gs<<" --> "<<gn<<endl;
                }else
                {
                      
                         gn=gn+(boxTypes[i][1]*(truckSize-gs));
                           cout<<gs<<" --> "<<gn<<endl;
                         break;
                }
        }


        return gn;
    }

};