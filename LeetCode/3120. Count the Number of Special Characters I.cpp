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
    int numberOfSpecialChars(string word) {
        int res=0;
        set<char>se;
        for(int i=0;i<word.length();i++)
            se.insert(word[i]);
        for(auto s:se){
            char temp=s;
            if(tolower(temp)==s){
                if(find(se.begin(),se.end(),toupper(temp))!=se.end())res++;
            }
        }
        return res;
    }
};