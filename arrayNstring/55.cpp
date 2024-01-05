55. Jump Game


class Solution {
public:
    /*
        goal is last index 
        peeche se shuru kroo , problem chotti krte jao
        agr ith index se goal pe ja rha , then reduce problem ->
        goal becomes to reach at index i
        at last check goal reaches 0, that is we can go from 0 to n-1
    */
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int goal = n-1;

        for(int i = n-2; i >= 0; i--){
            if(nums[i] + i >= goal){
                goal = i;
            }
        }

        return goal == 0;
    }
};