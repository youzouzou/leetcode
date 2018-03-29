/*
 题目要求：
 你可以假设每个输入都只会有一种答案，同样的元素不能被重用。
 示例:
 给定 nums = [2, 7, 11, 15], target = 9
 
 因为 nums[0] + nums[1] = 2 + 7 = 9
 所以返回 [0, 1]
 */

/*
 解题思路：
 将数组中的数分别两两相加，所得之和与给定目标值对比，若相等则返回
 */

// 代码实现
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        if(nums.size()!=0){
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]==target){
                        arr.push_back(i);
                        arr.push_back(j);
                        return arr;
                    }
                }
            }
        }
    }
};
