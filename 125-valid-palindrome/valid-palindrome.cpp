class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        
        for(char ch : s){
            if(isalnum(ch)){
                temp+=tolower(ch);

            }
        }
        int n = temp.length();
        int st = 0, end = n-1;
        while(st <= end ){
            if(temp[st]==temp[end]){
                st++;
                end--;
            }else{
                return false;
            }

        }
        return true;
        
    }
};