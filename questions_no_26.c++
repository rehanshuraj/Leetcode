class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;//handle empty array case

        int j = 0; // pointer for the position of unique elements
        for ( int i = 1; i< nums.size() ; i++){
            if(nums[j] != nums[i]){
               nums[++j] = nums[i];// move  the unique element to the next position
            }

        }
        return j+1;
    }
};