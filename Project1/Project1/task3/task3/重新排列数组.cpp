//����һ������ nums ���������� 2n ��Ԫ�أ��� [x1,x2,...,xn,y1,y2,...,yn] �ĸ�ʽ���С����㽫���鰴[x1, y1, x2, y2, ..., xn, yn] ��ʽ�������У��������ź�����顣

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ret;
        for (int i = 0; i < n; i++)
        {
            ret.push_back(nums[i]);
            ret.push_back(nums[n + i]);
        }
        return ret;
    }
};