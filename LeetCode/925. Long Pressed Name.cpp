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
    bool isLongPressedName(string name, string typed) {
        int pos=0;
        if(name==typed)return true;
        for(int i=0;i<name.length();i++){
            if(count(name.begin(),name.end(),name[i])>count(typed.begin(),typed.end(),name[i]))return false;
            if(name[i]==typed[pos]){pos++;}
            else{
                if(i==0)return false;
                if(typed[pos]==name[i-1]){pos++;i--;}
                else {return false;}
            }
        }
        for(int i=pos;i<typed.length();i++){
            if(typed[i]!=name[name.length()-1])return false;
        }
        return true;
    }
};