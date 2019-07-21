class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int Min=9999,Min_temp=0;int count=0;int flag=0;string ans="";string ans1;
        if(strs.size()==0||strs[0]=="")
            return "";
        if(strs.size()==1)
            return strs[0];
        
        ans=strs[0];
        for(int i=1;i<strs.size();i++){
            ans1="";
            for(int j=0;j<strs[i].length()&&j<ans.length();j++){
                if(ans[j]==strs[i][j]){
                    ans1+=strs[i][j];
                }
                else
                    break;
            }
            ans=ans1;
        }
        return ans;
    }
};