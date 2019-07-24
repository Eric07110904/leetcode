class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len=nums.size();
        unordered_map<int,int > array;
        unordered_map<int ,int>::iterator itr;
        for(int i=0;i<len;i++){
            if(array.find(nums[i])!=array.end()){
                array[nums[i]]+=1;
            }
            else{
                array[nums[i]]=1;
            }  
        }
        for(itr=array.begin();itr!=array.end();itr++){
            if(itr->second==1)
                return itr->first;
        }
        
        return 0;
        
    }
};
// xor?? my version just O(n)