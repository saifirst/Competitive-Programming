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
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int>res;
        for(int i=1;i<mountain.size()-1;i++){
            if(mountain[i]>mountain[i-1]&&mountain[i]>mountain[i+1]){
                res.push_back(i);
            }
        } 
        return res;
    }
};