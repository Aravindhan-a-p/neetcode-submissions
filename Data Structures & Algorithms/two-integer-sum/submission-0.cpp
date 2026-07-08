class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash; // [target-nums[i] , index]
        for(int i = 0; i < nums.size(); i++){
            int remain = target-nums[i];
            auto it = hash.find(remain);
            if(it != hash.end()){
                return {it->second, i};
            }
            hash[nums[i]] = i;
        }
        return {0,0};
    }
};
