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
    int minimumDifference(vector<int>& nums, int k) {
        int res=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-(k-1);i++){
            res=min(res,nums[i+(k-1)]-nums[i]);
        }
        return res;
    }
};