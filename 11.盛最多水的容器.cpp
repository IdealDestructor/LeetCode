/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int j = height.size()-1;
        int temp = 0;
        for(int i = 0; i < j;){
            if(min(height[i],height[j])>temp){
                temp = min(height[i],height[j]);
                res = max(res,(j-i)*temp);
            }
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return res;
    }
};
// @lc code=end

