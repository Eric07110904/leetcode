class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int smap[256]={};int tmap[256]={};
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++){
            if(smap[s[i]]!=tmap[t[i]])
                return false;
            smap[s[i]]+=(i+1);//i=0的話 +0等於沒用
            tmap[t[i]]+=(i+1);
        }
        return true;
    }
};