class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int n = nums.size();
        vector<int> prefix(n), suffix(n);
        for(int i = 0; i < n ; i++){
            prefix[i] = (i == 0) ? nums[0] : prefix[i-1]*nums[i] ;
            suffix[n-i-1] = (i == 0) ? nums[n-1] : suffix[n-i]*nums[n-i-1] ;
        }
        for(int i = 0; i < n; i++){
            int answer;
            if(i == 0){
                answer = suffix[1];
            }
            else if(i == n-1){
                answer = prefix[n-2];
            }
            else{
                answer = prefix[i-1]*suffix[i+1];
            }
            output.emplace_back(answer);
        }
        return output;
    }
};
