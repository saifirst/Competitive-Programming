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
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freq;
        int res;
        for(int i=0;i<nums.size();i++){
            freq.push_back(count(nums.begin(),nums.end(),nums[i]));
        }
    res=count(freq.begin(),freq.end(), *max_element(freq.begin(),freq.end()));
    return res;
}
};