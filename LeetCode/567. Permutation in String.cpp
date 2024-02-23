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
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        else{

        int st=0,en=s1.length()-1;
        string s1copy=s1;
        sort(s1copy.begin(),s1copy.end());
        while(en<s2.length()){
            string str="";
            for(int i=st;i<=en;i++){
            str+=s2[i];
            }
            sort(str.begin(),str.end());
            if(s1copy==str)return true;
            else {
                st++;
                en++;
            }
        }
        return false;
        }
    }
};