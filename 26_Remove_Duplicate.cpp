class Solution{
public:
   int removeDuplicate(vector<int>& nums){
     int k=1;
     for(int i=1;i<nums.size();i++){
         if(nums[i]!=nums[i-1]){
              nums[k]=nums[i];
              k++;
         }
     }
     return k;
   }
};
