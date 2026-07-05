class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        // vector<int> freq(n*n+1 , 0);
        // for(int i  = 0 ; i< n ; i++){
        //     for(int j = 0; j< n ; j++ ){
        //         freq[grid[i][j]]++;
        //     }
        // }
        // int repeated = -1 , missing = -1;
        // for(int i = 1; i <=n*n ; i++){
        //     if(freq[i]==2 ){
        //         repeated = i;

        //     }
        //     if(freq[i]==0){
        //         missing = i;
        //     }
        // }
        // return {repeated , missing };
        unordered_set<int> s;
        vector<int> ans;
        int a , b;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j< n ; j++){
                if(s.find(grid[i][j])!= s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                    break;
                }else{
                    s.insert(grid[i][j]);

                }
            }
        }
        int expSum = n*n*(n*n+1)/2;
        int aSum = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < n ; j++){
                aSum+=grid[i][j];

            }
            
        }
        b = expSum + a - aSum ;
        ans.push_back(b);
        return ans;
        
    }
};