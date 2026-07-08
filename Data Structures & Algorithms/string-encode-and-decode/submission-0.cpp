class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedString = "";
        for(string& str : strs){
            int len = str.length();
            encodedString += to_string(len) + '#' + str;
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> decodedString;
        int i = 0;
        while(i < s.length()){
            //136#
            string len = "";
            while(s[i] != '#'){
                len += s[i];
                i++;
            }
            //i is at #
            i++;
            //len = 136
            int l = stoi(len);
            string word = "";
            while(l--){
                word += s[i];
                i++;
            }
            decodedString.push_back(word);
        }
        return decodedString;
    }
};
