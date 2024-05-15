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
    bool isValid(string word) {
        bool minthree=word.length()>2?true:false;
        bool haschar=false;
        bool hasdig=false;
        bool hasvowel=false;
        bool hascon=false;
        if(!minthree)return false;
        for(int i=0;i<word.length();i++){
            if(word[i]=='@'||word[i]=='#'||word[i]=='$')return false;
            if(!(tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u')&&isdigit(word[i]))hasdig=true;
            if(!(tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u')&&isalpha(word[i])){hascon=true;}
            if((tolower(word[i]) == 'a' || tolower(word[i]) == 'e' || tolower(word[i]) == 'i' || tolower(word[i]) == 'o' || tolower(word[i]) == 'u'))hasvowel=true;
        }
        if(!hasvowel||!hascon)return false;
        else return true;
    }
};