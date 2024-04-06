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
    int minimumPushes(string word) {
        int limit=1;
        int res=0;
        for(int i=0;i<word.length();i++){
            if(limit<=8){
                res++;
            }
            else if(limit<=16){
                res+=2;
            }
            else if(limit<=24){
                res+=3;
            }
            else if(limit<=26){
                res+=4;
            }
                limit++;
        }
        return res;
    }
};