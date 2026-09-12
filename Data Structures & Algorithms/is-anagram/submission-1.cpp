class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size()!= t.size()){
            return false;
       } 
       unordered_map<char, int>freqS;
       for(int i=0; i<s.size(); i++){
            ++freqS[s[i]];
       }
       unordered_map<char, int> freqT;
       for(int i= 0; i<t.size(); i++){
            ++freqT[t[i]];
       }
       if (freqT==freqS){
            return true;
       }
       else
            return false;
    }
};
