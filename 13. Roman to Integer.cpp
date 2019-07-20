class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        char pre='0';
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='I'){
                if(pre=='V'||pre=='X')
                    sum-=1;
                else
                    sum+=1;
                pre='I';
            }
            else if(s[i]=='V'){
                
                sum+=5;pre='V';
            }
            else if(s[i]=='X'){
                if(pre=='L'||pre=='C')
                    sum-=10;
                else
                    sum+=10;
                pre='X';
            }
            else if(s[i]=='L'){
                
                sum+=50;pre='L';
            }
            else if(s[i]=='C'){
                if(pre=='D'||pre=='M')
                    sum-=100;
                else
                    sum+=100;
                pre='C';
            }
            else if(s[i]=='D'){
                
                sum+=500; pre='D';
            }
            else if(s[i]=='M'){
                
                sum+=1000;pre='M';
            }
            
        }
        return sum;
        
    }
};