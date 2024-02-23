class Solution {
  double findMedianSortedArrays(List<int> nums1, List<int> nums2) {
    
     List<int>ans=[];
     int n=nums1.length+nums2.length;
     for(int i=0;i<nums1.length;i++) ans.add(nums1[i]);
     for(int i=0;i<nums2.length;i++) ans.add(nums2[i]);
     ans.sort();

     if(n%2==1)
     {
         double x=ans[n~/2].toDouble();
         return x;
     }


     return ((ans[n~/2] + ans[(n~/2)-1]).toDouble())/2;

  }
}