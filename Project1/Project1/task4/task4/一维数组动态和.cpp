////����һ������ nums �����顸��̬�͡��ļ��㹫ʽΪ��runningSum[i] = sum(nums[0]��nums[i]) ���뷵�� nums �Ķ�̬�͡�
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