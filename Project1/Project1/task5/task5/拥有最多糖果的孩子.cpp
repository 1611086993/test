﻿//给你一个数组 candies 和一个整数 extraCandies ，其中 candies[i] 代表第 i 个孩子拥有的糖果数目。
//对每一个孩子，检查是否存在一种方案，将额外的 extraCandies 个糖果分配给孩子们之后，此孩子有 最多 的糖果。
//注意，允许有多个孩子同时拥有 最多 的糖果数目。

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ret;
        int max = candies[0];
        for (int i = 0; i < candies.size(); i++)
        {
            if (max < candies[i])
                max = candies[i];
        }
        for (int i = 0; i < candies.size(); i++)
        {
            int temp = candies[i] + extraCandies;
            if (temp >= max)
                ret.push_back(true);
            else
                ret.push_back(false);
        }
        return ret;
    }
};