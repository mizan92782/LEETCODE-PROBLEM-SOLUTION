class Solution {
public:

 bool overlap(vector<int>a,vector<int>b)
 {
    return (a[0]<=b[1] && b[0]<= a[1]);
 }

 vector<int> intersection(vector<int>a,vector<int>b)
 {
    return {max(a[0],b[0]),min(a[1],b[1])};
 }


 vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
       
       ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
       int fn=firstList.size();
       int sn=secondList.size();
        vector<vector<int>> result;
       
        int one=0;
        int two=0; 
        while(one<fn && two<sn){
         
               if(overlap(firstList[one],secondList[two]))
               {
                   result.push_back(intersection(firstList[one],secondList[two]));
                   
                  
               }


                 if(firstList[one][1]>secondList[two][1])
                   {
                     two++;
                   }else if(firstList[one][1]<secondList[two][1])
                   {
                     one++;
                   }else
                   {
                     one++;
                     two++;
                   }
               
          
       }



       return result;
    }
};