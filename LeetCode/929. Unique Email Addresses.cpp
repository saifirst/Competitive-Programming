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
    int numUniqueEmails(vector<string>& emails) {
        set<string> se;
        for(int i=0;i<emails.size();i++){
            string emailcop="";
            bool fndplus=false;
            for(int j=0;j<emails[i].find('@');j++){
                    if(emails[i][j]=='+')fndplus=true;
                if(emails[i][j]!='.'&&!fndplus){
                    emailcop+=emails[i][j];
                }
            }
            for(int j=emails[i].find('@');j<emails[i].size();j++){
                emailcop+=emails[i][j];
            }
            se.insert(emailcop);
        }
        return se.size();
    }
};