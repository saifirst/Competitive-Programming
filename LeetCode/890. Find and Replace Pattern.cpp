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
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<char,char>ma1;
        unordered_map<char,char>ma2;
        vector<string>res;
        for(int i=0;i<words.size();i++){
            int lim=0;
            bool happened=false;
            for(int j=0;j<words[i].length();j++){
                if((ma1.find(words[i][j])!=ma1.end() && ma1[words[i][j]]!=pattern[lim])||
                (ma2.find(pattern[lim])!=ma2.end() && ma2[pattern[lim]]!=words[i][j])){
                    happened=true;
                    break;
                }
                ma1[words[i][j]]=pattern[lim];
                ma2[pattern[lim]]=words[i][j];
                lim++;
            }
            if(!happened)res.push_back(words[i]);
            ma1.clear();
            ma2.clear();
        }
        return res;
    }
};