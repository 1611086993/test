//����һ�����ǵݼ�˳��������������� A������ÿ�����ֵ�ƽ����ɵ������飬Ҫ��Ҳ���ǵݼ�˳������

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ret;
        for (int i = 0; i < A.size(); i++)
        {
            ret.push_back(A[i] * A[i]);
        }

        sort(ret.begin(), ret.end()); //��������
        return ret;
    }
};