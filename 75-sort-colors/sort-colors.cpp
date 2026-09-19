class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for(int x : nums){
            if(x==0) zero++;
            else if(x==1) one++;
            else two++;
        }
        int k = 0;
        while(zero--)
            nums[k++] = 0;
        while(one--)
        nums[k++] =1;
        while(two--)
        nums[k++] = 2;
    }
};