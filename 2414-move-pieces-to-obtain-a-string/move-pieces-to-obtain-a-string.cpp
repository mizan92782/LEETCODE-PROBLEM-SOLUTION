class Solution {
public:
    bool canChange(string start, string target) {
   
        queue<pair<char,int>>sq,tq;
        
        for(int i=0;i<start.size();i++)
        {
            if(start[i]!='_')
            {
                sq.push({start[i],i});
            }

            if(target[i]!='_')
            {
                tq.push({target[i],i});
            }
        }



        if(sq.size()!=tq.size()) return false;

        while(!sq.empty())
        {
               auto[sc,sind]=sq.front();
               auto[tc,tind]=tq.front();
               sq.pop();
               tq.pop();

               if(sc!=tc  || (tc=='L' && sind<tind )  || (tc=='R'  && tind <sind)) 
               {
                return false;
               }
        }


        return true;
        
    }
};