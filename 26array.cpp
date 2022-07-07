class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int j = 1;
        int max = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] > max)
            {
                max = nums[i];
                swap(nums[i], nums[j]);
                j++;
            }
        }
        return j;
    }
};