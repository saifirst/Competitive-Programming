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
    int removeElement(vector<int>& nums, int val) {
        int res=nums.size()-count(nums.begin(),nums.end(),val);
        int whereto=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){nums[whereto]=nums[i];whereto++;}

        }
        for(int i=res;i<nums.size();i++){
            nums[i]=0;
        }
        return res;
    }
};