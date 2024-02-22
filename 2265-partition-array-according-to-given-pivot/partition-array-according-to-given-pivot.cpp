class Solution {
public:
    vector<int> pivotArray(vector<int>& s, int pivot) {
        

         stable_partition(s.begin(),s.end(),[pivot](int x ){ return x<pivot;});
          stable_partition(s.rbegin(),s.rend(),[pivot](int x ){ return x>pivot;});

         return s;
    
    }
};