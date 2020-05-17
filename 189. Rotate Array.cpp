class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int step = k%nums.size();
        vector<int>temp(nums);

        nums.insert(nums.begin(),temp.end()-step,temp.end());
        nums.erase(nums.end()-step,nums.end());
    }
};