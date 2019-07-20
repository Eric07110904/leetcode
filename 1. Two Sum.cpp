class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>table;
        vector<int>ans;
        //search
        
        for(int i=0;i<nums.size();i++){
            if(table.find(target-nums[i])!=table.end()&&table.find(target-nums[i])->second!=i){//find num whetherin table
                ans.push_back(i);
                ans.push_back(table[target-nums[i]]);
                return ans;
            }
            else{// if not in it , create it this step save many time
                table[nums[i]]=i;
            }
                
        }
        
        return nums;
    }
};