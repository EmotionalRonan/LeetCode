/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int rev =0;
        while (x!=0)
        {
            int pop = x %10;
            x /= 10;
            //TODO 判断边界值
            rev = rev * 10 + pop;
        }
        return rev;

    }
};
// @lc code=end

