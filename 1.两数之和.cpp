/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        /****** 1、暴力解法 *******/

        // int i,j;
        // for(i=0;i<nums.size()-1;i++)
        // {
        //     for(j=i+1;j<nums.size();j++)
        //     {
        //         if(nums[i]+nums[j]==target)
        //         {
        //            return {i,j};
        //         }
        //     }
        // }
        // return {i,j};

        /****** 2、hashMap解法 *******/
        map<int,int> a;
        vector<int> b(2,-1);
        for (int  i = 0; i < nums.size(); i++)
        {
            a.insert(map<int,int>::value_type(nums[i],i));
        }
        for (int  i = 0; i < nums.size(); i++)
        {
            if(a.count(target-nums[i])>0 ||a[target-nums[i]]!=i){
                b[0]=i;
                b[1]=a[target-nums[i]];
                break;
            }
        }
        return b;
    }
};
// @lc code=end

