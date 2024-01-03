//26. Remove Duplicates from Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1; //0 idx pe ele sorted hi hog a, baki pe 2 pointer 
        int j = 1;

        int count = 1;//first element pehle se unique hai 
        while(i < nums.size()){
            if(nums[i-1] != nums[i]){
                nums[j] = nums[i];
                i++;
                j++;
                count++;
            }else{
                i++;
            }
        }

        return count;
    }
};