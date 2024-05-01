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
    int maxOperations(vector<int>& nums) {
        int res=1;
        int frst=nums[0]+nums[1];
        for(int i=2;i<nums.size();i+=2){
            if(nums[i]+nums[i+1]==frst)res++;
            else break;
        }
        return res;
    }
};