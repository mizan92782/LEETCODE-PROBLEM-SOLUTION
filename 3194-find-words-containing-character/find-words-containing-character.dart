class Solution {
  List<int> findWordsContaining(List<String> words, String x) {
     
     List<int>ans=[];

     for(int i=0;i<words.length;i++)
     {
         if(words[i].contains(x))
         {
             ans.add(i);
         }
     }


     return ans;

  }
}