class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // int n = nums.size();
        // unordered_set<int> s ;
        // int a ;
        // for(int i = 0; i < n ; i++){
        //     if(s.find(nums[i])!=s.end()){
        //         a= nums[i];
        //         break;

        //     }else{
        //         s.insert(nums[i]);
        //     }
        // }
        // return a;  

        //by freq finding 

        // int n = nums.size();
        // int a ;
        // vector <int> freq(n+1, 0);
        // for(int i = 0 ; i < n ; i++){
        //     freq[nums[i]]++;
        // }
        // for(int i = 1; i<= n ; i++){
        //     if(freq[i]>1){
        //         a = i;

        //     }
        // }
        // return a; 

        //by hashing 

        int slow = nums[0], fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow!=fast);

        slow = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
            
        }
        return slow;
        
    }
};