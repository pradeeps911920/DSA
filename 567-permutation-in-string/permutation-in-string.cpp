class Solution {
public:
    bool isFreqsame(int Freq1[] , int Freq2[]){
        for(int i = 0 ; i < 26 ; i++){
            if(Freq1[i]!= Freq2[i]){
                return false;
            }
        }
        return true;

    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};
        for(int i = 0; i < s1.length(); i++){
            freq[s1[i]-'a']++;
        }
        int Windsize = s1.length();
        for(int i = 0; i < s2.length(); i++){
            int idx = i ;
            int Windidx = 0 ;
            int Windfreq[26] = {0};
            while(Windidx < Windsize && idx < s2.length()){
                Windfreq[s2[idx]-'a']++;
                Windidx++ , idx++;

            }
            if(isFreqsame(freq , Windfreq)){
                return true;
            }
        }
        return false;
        
    }
};