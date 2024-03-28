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
    vector<int> numberGame(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        vector<int>res;
        for(int i=0;i<nums.size();i+=2){
            res.push_back(nums[i+1]);
            res.push_back(nums[i]);
        }
        return res;
    }
};