class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pro=1;
        for(int i=0;i<nums.size();i++){
            pro*=nums[i];
        }
        if(pro>0){
            return 1;
        }else if(pro==0){
            return 0;
        }else{
            return -1;
        }
    }
};