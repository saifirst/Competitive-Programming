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
    string sortVowels(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string vowels="";
        for(int i=0;i<s.length();i++){
            char isVowel=s[i];
            
            if(tolower(isVowel)=='a'||tolower(isVowel)=='e'||tolower(isVowel)=='i'||tolower(isVowel)=='u'||tolower(isVowel)=='o'){
                vowels+=s[i];
            }
        }
        sort(vowels.begin(),vowels.end());
        int indx=0;
        for(int i=0;i<s.length();i++){
            if(indx>=vowels.length())break;
            char isVowel=s[i];
            if(tolower(isVowel)=='a'||tolower(isVowel)=='e'||tolower(isVowel)=='i'||tolower(isVowel)=='u'||tolower(isVowel)=='o'){
                s[i]=vowels[indx];
                indx++;
            }
        }
        return s;
    }
};