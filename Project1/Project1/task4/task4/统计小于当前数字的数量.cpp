////����һ������?nums����������ÿ��Ԫ��?nums[i]������ͳ�������б���С���������ֵ���Ŀ��
////������֮������ÿ��?nums[i]?�����������Ч��?j?������������ j ����?j != i �� nums[j] < nums[i]?��
//
//class Solution {
//public:
//    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//        vector<int> ret;
//        int count;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            count = 0;
//            for (int j = 0; j < nums.size(); j++)
//            {
//                if ((j != i) && (nums[j] < nums[i]))
//                    count++;
//            }
//            ret.push_back(count);
//        }
//        return ret;
//    }
//};