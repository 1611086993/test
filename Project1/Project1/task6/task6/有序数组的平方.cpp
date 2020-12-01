//给定一个按非递减顺序排序的整数数组 A，返回每个数字的平方组成的新数组，要求也按非递减顺序排序。

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> ret;
        for (int i = 0; i < A.size(); i++)
        {
            ret.push_back(A[i] * A[i]);
        }

        sort(ret.begin(), ret.end()); //快速排序
        return ret;
    }
};