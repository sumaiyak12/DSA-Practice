class Solution {
public:
    bool check(string &cleaned , int i){
            int n = cleaned.size();
            if(i >= n/2) return true;
            if(cleaned[i] != cleaned[n-i-1]) return false;
            return check(cleaned , i+1);
        }
    bool isPalindrome(string s) {
        string cleaned = "";

        for( char c : s){
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }
        return check(cleaned , 0);
    }
}; 