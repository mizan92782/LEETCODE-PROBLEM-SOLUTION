class Solution {
public:

   int  arithmatic(int a,int b,string c)
   {
        if(c=="+") return a+b;
        if(c=="-") return b-a;
        if(c=="*") return a*b;

    return b/a;
   }


    int evalRPN(vector<string>& tokens) {

        stack<int>sta;

        int n=tokens.size();
        
        for(int i=0;i<n;i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-"  || tokens[i]=="*"  || tokens[i]=="/")
            {
                
                int x=sta.top();
                 sta.pop();
                 int y=sta.top();
                 sta.pop();

                 cout<<x <<" --> "<<y<<endl;
                 sta.push(arithmatic(x,y,tokens[i]));
            }else
            {
               sta.push(stoi(tokens[i]));  
            }
        }


        return sta.top();
        
    }
};