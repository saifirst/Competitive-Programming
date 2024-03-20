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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int minsiz=min(nums1.size(),nums2.size());
        vector<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int p1=0,p2=0;
        while(p1<nums1.size()&&p2<nums2.size()){
            if(nums1[p1]>nums2[p2])p2++;
            else if(nums1[p1]<nums2[p2])p1++;
            else {res.push_back(nums1[p1]);p1++;p2++;}
        }
        return res;
    }
};