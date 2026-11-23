class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int often[26]={0};
        for(int i=0;i<s.length();++i){
            often[s[i]-'a']++;
            often[t[i]-'a']--;
        }
        for(int i=0;i<26;++i){
            if(often[i]!=0) return false;
        }
        return true;
    }
};
