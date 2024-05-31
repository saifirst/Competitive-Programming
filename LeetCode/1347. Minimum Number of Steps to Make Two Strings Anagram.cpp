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
    int minSteps(string s, string t) {
        int counts[26];
        for(int i=0;i<s.length();i++){
            counts[s.at(i)-'a']++;
            counts[t.at(i)-'a']--;
        }
        int res=0;
        for(auto i:counts)if(i>0)res+=i;
        return res;
    }
};