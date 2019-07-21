class Solution {
public:
    vector<int> diStringMatch(string S) {
        int len=S.length();vector<int>ans;
        int a=0,b=len;

        for(int i=0;i<len+1;i++){
            if(i>=len){
                if(S[i-1]=='I'){
                    ans.push_back(a);
                }
                else{
                    ans.push_back(b);
                }
            }
            else{
                if(S[i]=='I'){
                    ans.push_back(a);
                    a+=1;
                }
                else{
                    ans.push_back(b);
                    b-=1;
                }
            }
            
        }
        return ans;
    }
};