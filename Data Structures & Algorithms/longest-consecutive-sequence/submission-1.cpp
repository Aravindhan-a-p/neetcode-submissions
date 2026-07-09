class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        
        int maxSeq = 1;
        int currentSeq = 0;

        for(auto val : st){
            if(st.find(val-1) == st.end())//start of the sequence
            {
                currentSeq++;
                int currNum = val;
                while(st.find(currNum+1) != st.end()){
                    currentSeq++;
                    currNum++;
                }
                maxSeq = max(maxSeq, currentSeq);
                currentSeq = 0;
            }
        }
        return maxSeq;
    }
};
