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
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>res=arr;
        int maxer=0;
        for(int i=arr.size()-2;i>=0;i--){
            maxer=max(maxer,arr[i+1]);
            res[i]=maxer;
        }
        res[res.size()-1]=-1;
        return res;
    }
};