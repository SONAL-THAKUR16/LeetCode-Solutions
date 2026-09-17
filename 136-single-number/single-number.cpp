class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr=0;
        //XOR opertor ka use karengy
        for(int num:nums){
            xr=xr^num;
        }
        return xr;
    }      
};