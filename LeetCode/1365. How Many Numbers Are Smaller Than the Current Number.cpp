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
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
cin.tie(NULL);
        vector<int>cop=nums;
        sort(cop.begin(),cop.end());
        for(int i=0;i<nums.size();i++){
            nums[i]=distance(cop.begin(),find(cop.begin(),cop.end(),nums[i])); 
        }
        return nums;
    }
};