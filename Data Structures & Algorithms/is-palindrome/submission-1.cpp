class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char c : s){
            if (isalnum(c)){
                str += tolower(c);
            }
        }
        int ptr1 = 0;
        int ptr2 = str.size()-1;

        while(ptr1 < ptr2){
            if (str[ptr1] != str[ptr2]){
                return false;
            }
            ptr1++;
            ptr2--;
        }
        return true;
    }
};
