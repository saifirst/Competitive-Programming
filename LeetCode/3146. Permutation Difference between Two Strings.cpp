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
    int findPermutationDifference(string s, string t) {
        int res=0;
        
        for(int i=0;i<s.length();i++){
            res+=abs(static_cast<int>(s.find(s[i]))-static_cast<int>(t.find(s[i])));
        }
        return res;
    }
};