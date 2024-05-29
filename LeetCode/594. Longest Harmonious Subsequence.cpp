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
    int findLHS(vector<int>& nums) {
        map<int,int>res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        int max=0;
        for(auto i=res.begin();i!=res.end();i++){
            if(res.find(i->first+1)!=res.end()){
                if(i->second+res[i->first+1]>max)max=i->second+res[i->first+1];
            }
        }
        return max;
    }
};