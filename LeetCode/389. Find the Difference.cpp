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
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        char c='-';
        for(int i=0;i<s.size();i++){
            if(t[i]!=s[i]){c=t[i];break;}
        }
        if(c=='-')return t[t.size()-1];
        else return c;
    }
    
};