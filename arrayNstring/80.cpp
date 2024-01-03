// 80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        int r = 0;

        while(r < nums.size()){
            //initially one unique number considered at 0 idx 
            int count = 1;
            while(r+1 < nums.size() && nums[r] == nums[r+1]){
                count++;
                r++;
            }

            //min(2,count)
            //agr 2 se kamm hai to ek hi number change hoga 
            //agr 2 se jyada hai to sirf 2 number change honge 
            for(int i = 0; i < min(2,count); i++){
                nums[l] = nums[r];
                l++;
            }

            r++;//move to next unique number 
        }

        return l;
    }
};