class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0, index2 = numbers.size() -1;
        vector<int> answer(2);
        while(index1 < index2){
            if(numbers[index1] + numbers[index2] > target){
                index2--;
            }
            else if(numbers[index1] + numbers[index2] < target){
                index1++;
            }
            else{
                answer = {index1+1,index2+1};
                break;
            }
        }
        return answer;
    }
};
