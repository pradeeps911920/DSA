class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
        int st = 0 , end = n-1;
        while(s.length() >0 && s.find(part)< s.length()){
            if(s.find(part)<n){
                s.erase(s.find(part), part.length());

            }
        }
        return s ;
        
    }
};