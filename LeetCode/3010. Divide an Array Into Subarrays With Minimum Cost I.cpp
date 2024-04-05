/*
  ____        _  __   ____  _                  _     
 / ___|  __ _(_)/ _| | __ )| |_ ___  _   _ ___| |__  
 \___ \ / _` | | |_  |  _ \| __/ _ \| | | / __| '_ \ 
  ___) | (_| | |  _| | |_) | || (_) | |_| \__ \ | | |
 |____/ \__,_|_|_|   |____/ \__\___/ \__,_|___/_| |_|                                                   
                                                                                  
https://www.linkedin.com/in/saif-btoush/                                                                                                                                                                              
*/
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int res=nums[0];
        int smallest=INT_MAX;
        int secondSmallest=INT_MAX;
        for(int i=1;i<nums.size();i++){
            if (nums[i] <= smallest) {
            secondSmallest = smallest;
            smallest = nums[i];
        } else if (nums[i] <= secondSmallest && nums[i] != smallest) {
            secondSmallest = nums[i];
        }
        }
        res+=smallest+secondSmallest;
        return res;
        }
};