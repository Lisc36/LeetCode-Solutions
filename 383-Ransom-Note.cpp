class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <int,int> often;
        for(int i=0;i<magazine.length();++i){
            often[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();++i){
            often[ransomNote[i]]--;
            if(often[ransomNote[i]]<0) return false;
        }
        return true;
    }
};
