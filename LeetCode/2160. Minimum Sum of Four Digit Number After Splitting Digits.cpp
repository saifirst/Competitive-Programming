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
    int minimumSum(int num) {
        string n=to_string(num);
        sort(n.begin(),n.end());
        string n1="";
        string n2="";
        n1+=n[0];
        n1+=n[3];
        n2+=n[1];
        n2+=n[2];
        return stoi(n1)+stoi(n2);
    }
};