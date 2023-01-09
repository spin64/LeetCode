class Solution {
public:
    bool isPalindrome(int x) {
        stringstream ss;
        ss << x;
        string str = ss.str();

        int length = str.length();

        for (int i = 0; i < length/2; ++i){
            if (str[i] != str[length - i - 1]){
                return false;
            }
        }

        return true;

    }
};