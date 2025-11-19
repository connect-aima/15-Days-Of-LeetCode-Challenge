//kadan's algorithm optimize approach with linear time complexity 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0;
        int totalSum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            currentSum+=nums[i];
            totalSum=max(currentSum,totalSum);
            if(currentSum<0){
               currentSum=0;
            }
        }
        return totalSum;
    }
};