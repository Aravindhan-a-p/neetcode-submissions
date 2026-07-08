class Solution {
    struct comparator{
        bool operator()(const pair<int,int>& p1, const pair<int,int>& p2) const {
            return p1.second < p2.second;
        }
    };
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int& num : nums){
            hash[num]++;
        }
        priority_queue<pair<int,int> , vector<pair<int,int>>, comparator> heap;

        for(auto& pair : hash){
            heap.push(pair);
        }

        vector<int> answer;
        while(!heap.empty() && k--){
            answer.push_back(heap.top().first);
            heap.pop();
        }
        return answer;
    }
};
