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
    string removeOccurrences(string s, string part) {
        string sub;
        for(int i=0;i<s.size();i++){
            sub=s.substr(i,part.size());
            if(sub==part){
                s.erase(s.begin()+i,s.begin()+(i+part.size()));
                i=s.find(part[0])-1;
            }
        }
        return s;

    }
};