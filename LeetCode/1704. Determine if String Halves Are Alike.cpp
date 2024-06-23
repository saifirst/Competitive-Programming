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
    bool halvesAreAlike(string s) {
        set<char>vowels={'a','e','i','o','u'};
        int h1=0;
        int h2=0;
        for(int i=0;i<s.length()/2;i++){
            if(find(vowels.begin(),vowels.end(),tolower(s[i]))!=vowels.end())h1++;
            if(find(vowels.begin(),vowels.end(),tolower(s[(s.length()-i)-1]))!=vowels.end())h2++;
        }
        if(h1!=h2)return false;
        return true;
    }
};