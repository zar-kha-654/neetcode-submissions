class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int current =1;
        int longest =1;
        for(int i= 1; i<nums.size(); i++){
            int difference = nums[i]-nums[i-1];
            if(difference == 1){
                current++;
            }
            else if(difference== 0){
                continue;
            }
            else{
                if(current > longest){
                    longest = current;
                }
                current =1;
            }
        }
        if(current > longest){
                    longest = current;
                }
        return longest;
    }
};
