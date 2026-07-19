class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //brute force 

        int n = nums.size();
        
        // int count = 0;
        // for(int st = 0; st < n ; st++){
        //     int sum = 0;
        //     for(int end = st ; end < n ; end++){
        //         sum+=nums[end];
        //         if(sum==k){
        //             count++;
        //         }
        //     }
        // }
        // return count ; 
        vector <int> PS(n,0);
        int count = 0; 
        PS[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            PS[i] = PS[i-1]+ nums[i];

        }
        unordered_map<int , int> m;
        for(int j = 0 ; j < n ; j++){
            if(PS[j]==k) count++;
            int val = PS[j]-k;
            if(m.find(val)!= m.end()){
                count+= m[val];
            }
            if(m.find(PS[j])== m.end()){
                m[PS[j]] = 0;
            }
            m[PS[j]]++;
            
        }
        return count;


    }
};