class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded ="";
        for(string word : strs){
            encoded += to_string(word.size())+"#"+word;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i = 0;
        string word="";
        while(i<s.size()){
            //empty string length
            string length ="";
            while(s[i]!='#'){
                length += s[i];
                i++;
            }
            int len = stoi(length);
            word = s.substr(i+1,len);
            res.push_back(word);
            i+= len+1;
    }
        return res;

    }
};


