class Solution {
public:
    bool isValid(string s) {
        if(s=="")
            return true;
        vector<char>Stack;
        Stack.push_back(s[0]);
        int top=0;
        for(int i=1;i<s.length();i++){
            if(top==-1){
                top++;
                Stack.push_back(s[i]);
                continue;
            }
            if((s[i]==')'&&Stack[top]=='(')||(s[i]=='}'&&Stack[top]=='{')||(s[i]==']'&&Stack[top]=='[')){
                Stack.erase(Stack.begin()+top,Stack.end());
                top--;
            }
            else{
                top++;
                Stack.push_back(s[i]);
                    
            }
            
            
        }
        
        return bool(Stack.size()==0);
            
    }
};