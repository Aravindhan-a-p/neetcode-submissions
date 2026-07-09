class Solution {
public:
    bool isPalindrome(string s) {
      
      s.erase(
        remove_if(s.begin(), s.end(),
        [](unsigned char c)
        {
            return !isalnum(c);
        }), s.end());

      int left = 0;
      int right = s.length()-1;
      while(left < right){
        
        if(tolower(s[left]) != tolower(s[right])) return false;
        left++;
        right--;
      }
      return true;
    }
};
