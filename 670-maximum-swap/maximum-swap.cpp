class Solution {
public:

    struct Compare {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;  
    }
   };


    int maximumSwap(int num) {

       if(num<=9) return num;

       //get digit vec
       vector<int>digit;
       while(num)
       {
          digit.push_back(num%10);
          num/=10;
       } 


       //reverse 
       reverse(digit.begin(),digit.end());

       priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;

       for(int i=0;i<digit.size();i++)
       {
           pq.push({digit[i],i});
       }


       int i=0;
       while(!pq.empty())
       {
          if(digit[i]!=pq.top().first)
          {  
             int x=pq.top().first;
             int y=pq.top().second;
             pq.pop();

             int mx=y;
             while(!pq.empty() && pq.top().first==x)
             {
                x=pq.top().first;
                y=pq.top().second;
                mx=max(mx,y);

               

                pq.pop();
             }

           
             
             swap(digit[i],digit[mx]);
             break;
          }

          i++;
          pq.pop();
       }


       num=0;

       for(int i=0;i<digit.size();i++)
       {

          num=num*10+digit[i];

          
       }



       return num;



    }
};