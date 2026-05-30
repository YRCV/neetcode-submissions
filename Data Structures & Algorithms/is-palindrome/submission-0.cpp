class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right){
            char leftchar = s[left];
            char rightchar = s[right];
            if (isalnum(leftchar) == 0){
                left++;
                continue;
            }
            if (isalnum(rightchar) == 0){
                right--;
                continue;
            }
            if (tolower(leftchar) == tolower(rightchar)){
                left++;
                right--;
            } else{
                return false;
            }
        }
        return true;
    }
};
