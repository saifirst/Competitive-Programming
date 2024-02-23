/*
  ____        _  __   ____  _                  _     
 / ___|  __ _(_)/ _| | __ )| |_ ___  _   _ ___| |__  
 \___ \ / _` | | |_  |  _ \| __/ _ \| | | / __| '_ \ 
  ___) | (_| | |  _| | |_) | || (_) | |_| \__ \ | | |
 |____/ \__,_|_|_|   |____/ \__\___/ \__,_|___/_| |_|                                                   
                                                                                  
https://www.linkedin.com/in/saif-btoush/                                                                                                                                                                              
*/
bool ispalindrom(string s){
    string r=s;
    reverse(r.begin(),r.end());
    if(s==r)return true;
    else return false;
}

class Solution {
public:
    bool validPalindrome(string s) {
        int l=0,r=(s.length()-1);
        while(l<=r){
            if(s[l]!=s[r]){
                string r1,r2;
                for(int i=l+1;i<=r;i++)r1+=s[i];
                for(int i=l;i<r;i++)r2+=s[i];
                if(ispalindrom(r1))l++;
                else if(ispalindrom(r2))r--;
                else return false;
            }
            else {l++;r--;}
        }
        return true;
    }
};