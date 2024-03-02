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
    bool checkOnesSegment(string s) {
        vector<int>positionsOfOnes;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                positionsOfOnes.push_back(i);
                if (positionsOfOnes.size()>1&& (positionsOfOnes[positionsOfOnes.size()-1]-positionsOfOnes[positionsOfOnes.size()-2]>1))return false;
                }
        }
        if(positionsOfOnes.size()==0)
        return false;
        else return true;
    }
};