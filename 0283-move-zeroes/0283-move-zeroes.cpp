#include<iostream>
#include<vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int slow = 0 ;
       int fast = 0 ;
       while (fast <nums.size())
       {
        if (nums[fast]!=0 )
        {
         std ::swap(nums[slow],nums[fast]);
         slow ++ ;
         //fast ++ ;
        }
        else 
        {
        }
        fast ++ ;
       } 
    }
};