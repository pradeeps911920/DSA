class Solution {
public:
    int maxArea(vector<int>& height) {
        int minh = 0; 
        int lp = 0; 
        int rp = height.size()-1 ;
        int maxw = 0;
        while(lp<rp){
            int width = rp - lp ;
            int minh = min(height[lp], height[rp]);
            int area = minh*width ;
            maxw = max(area , maxw);
            if( height[lp] < height[rp]){
                lp++;
            }else{
                rp--;
            }  
        }
        return maxw;
        
    }
};