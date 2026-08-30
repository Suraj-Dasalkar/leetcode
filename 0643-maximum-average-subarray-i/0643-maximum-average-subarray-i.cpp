class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double current= 0 ;
       for (int i = 0 ; i <k ; i ++)
        {
            current+=nums[i];
        }
        double max_sum = current ;
        for(int i = k ; i < nums.size(); i ++)
        {
            current+=nums[i]-nums[i-k];
            max_sum=max(current,max_sum);
        }
        return max_sum/k;
    }
};