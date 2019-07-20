class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>table;
        map<int,int>::iterator iter;
        vector<int>ans;
        //create map
        for(int i=0;i<nums.size();i++){
            table[nums[i]]=i;
        }
        //search
        
        for(int i=0;i<nums.size();i++){
            iter=table.find(target-nums[i]);
            if(iter!=table.end()&&iter->second!=i){
                ans.push_back(i);ans.push_back(iter->second);
                return ans;
            }
                
        }
        
        return nums;
    }
};