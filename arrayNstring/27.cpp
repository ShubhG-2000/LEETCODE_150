//27. Remove Element


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        

        int i = 0;
        int j = nums.size() - 1;
        
        int count = 0;
        while(i <= j){
            if(nums[i] == val){//swap j--
                count++;
                swap(nums[i], nums[j]);
                j--;
            }else{//i++
                
                i++;
            }
        }


        return nums.size() - count;
    }
};