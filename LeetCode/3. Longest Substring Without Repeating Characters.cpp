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
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1){
            return 1;
        }
        else{

        int len=0;
        int l=0,r=1;
        string scopy="";
        scopy+=s[l];
        while(r<s.size()){
            if(count(scopy.begin(),scopy.end(),s[r])==0){
                scopy+=s[r];
                r++;
            }
            else{
                l++;
                r=l+1;
                scopy="";
                scopy+=s[l];

            }
            if(scopy.length()>len){
                len=scopy.length();
            }
        }
        return len;
        }
    }
};
