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
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res(2);
        for(int i=0;i<max(nums1.size(),nums2.size());i++){
            if(i<nums1.size()&&count(nums2.begin(),nums2.end(),nums1[i])>0){
                res[0]++;
            }
            if(i<nums2.size()&&count(nums1.begin(),nums1.end(),nums2[i])>0){
                res[1]++;
            }
        }
        return res;
    }
};