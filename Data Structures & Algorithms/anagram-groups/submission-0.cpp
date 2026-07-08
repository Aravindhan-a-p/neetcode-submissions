class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        unordered_map<string, vector<string>> hash;
        for(string& str : strs){
            string t = str;
            sort(str.begin(),str.end());
            hash[str].push_back(t);
        }

        for(auto it : hash){
            output.push_back(it.second);
        }
        return output;
    }
};
