//����һ���������� nums �����һ������(i, j) ���� nums[i] == nums[j] �� i < j ���Ϳ�����Ϊ����һ�� ������ �����غ����Ե���Ŀ��

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