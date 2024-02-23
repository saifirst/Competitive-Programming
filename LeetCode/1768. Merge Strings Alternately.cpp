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
    string mergeAlternately(string word1, string word2) {
        int w1=0,w2=0;
        string res="";
        while(w1<word1.length()||w2<word2.length()){
            if(w1<word1.length())
            {
                res+=word1[w1];w1++;
            }
            if(w2<word2.length()){
                res+=word2[w2];w2++;
            }
        }
        return res;
    }
};