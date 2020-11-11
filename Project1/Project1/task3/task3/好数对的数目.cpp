//给你一个整数数组 nums 。如果一组数字(i, j) 满足 nums[i] == nums[j] 且 i < j ，就可以认为这是一组 好数对 。返回好数对的数目。

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int len;
        len = nums.size();
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (nums[i] == nums[j])
                    count++;
            }
        }
        return count;
    }
}; 