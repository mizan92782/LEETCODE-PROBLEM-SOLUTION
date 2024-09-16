class Solution {
public:
   
    

    int findMinDifference(vector<string>& timePoints) {
        

       
            vector<int>vec;
           for(string s: timePoints)
           {
               
                int h=(s[0]-'0')*10+(s[1]-'0');
                int m=(s[3]-'0')*10+(s[4]-'0');

                vec.push_back(h*60+m);
           }


          sort(vec.begin(),vec.end());
          vec.push_back(vec[0]+1440);

          int mt=INT_MAX;

          for(int i=0;i<vec.size()-1;i++)
          {
             if(abs(vec[i]-vec[i+1])<mt)
             {
                
                    mt=abs(vec[i]-vec[i+1]);
    
             }
          }



           return mt;
       
    }
};