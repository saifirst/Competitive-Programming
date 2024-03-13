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
    vector<int> minOperations(string boxes) {
        vector<int>onesindex;
        for(int i=0;i<boxes.length();i++){
            if(boxes[i]=='1')onesindex.push_back(i);
        }
        vector<int>res(boxes.length(),0);
        for(int i=0;i<res.size();i++){
            for(int j=0;j<onesindex.size();j++){
                res[i]+=abs(i-onesindex[j]);
            }
        }
        return res;

    }
};