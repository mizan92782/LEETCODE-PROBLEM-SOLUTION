class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        vector<int> note;

        for (int i = 0; i < arr2.size(); i++) {

           
            for (int j = 0; j < arr1.size(); j++) {

                if (arr2[i] == arr1[j]) {
                    ans.push_back(arr1[j]);
                    arr1[j]=INT_MIN;
                   
                   
                }
            }

    

           
        }

        for(int i=0;i<arr1.size();i++)
        {
            if(arr1[i]!=INT_MIN)
            {
                note.push_back(arr1[i]);
            }
        }


       

        sort(note.begin(), note.end());

        for (int i = 0; i < note.size(); i++) {
            ans.push_back(note[i]);
        }

        return ans;
    }
};