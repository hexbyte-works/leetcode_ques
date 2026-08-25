class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive=0, currentHigh=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            {
                currentHigh+=1;
            }
            else{
                currentHigh=0;
            }
            if(currentHigh>maxConsecutive){
                maxConsecutive=currentHigh;
            }
        }
        return maxConsecutive;
    }
};