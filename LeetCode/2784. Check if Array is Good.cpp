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
    bool isGood(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        if(count(nums.begin(),nums.end(),nums[nums.size()-1])!=2)return false;
        int indx=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==indx){indx++;}
            else{
                if(nums[i]!=nums[nums.size()-1]||nums[i]>nums.size())return false;
            }
        }
        return true;
    }
};