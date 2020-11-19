////给你一个数组 nums 。数组「动态和」的计算公式为：runningSum[i] = sum(nums[0]…nums[i]) 。请返回 nums 的动态和。
//
//class Solution {
//public:
//    vector<int> runningSum(vector<int>& nums) {
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (i > 0)
//            {
//                nums[i] += nums[i - 1];
//            }
//        }
//        return nums;
//    }
//};