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
    bool buddyStrings(string s, string goal) {
        string ssorted=s;
        string goalsorted=goal;
        sort(ssorted.begin(),ssorted.end());
        sort(goalsorted.begin(),goalsorted.end());
        if(ssorted!=goalsorted)return false;
        else if(s!=goal){
            int limit=3;
            for(int i=0;i<s.length();i++){
                if(s[i]!=goal[i])limit--;
                if(limit==0){return false;}
            }
            return true;
        }
        else if(s==goal){
            int duplicates=0;
            for(int i=0;i<s.length();i++){
                if(count(s.begin(),s.end(),s[i])>1)return true;
            }
            return false;
        }
    return true;
    }
};