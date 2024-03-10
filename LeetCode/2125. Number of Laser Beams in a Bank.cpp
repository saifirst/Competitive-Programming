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
    int numberOfBeams(vector<string>& bank) {
        int res=0;
        for(int i=0;i<bank.size()-1;i++){
            if(count(bank[i].begin(),bank[i].end(),'1')>0){
            for(int j=i+1;j<bank.size();j++){
                if(count(bank[j].begin(),bank[j].end(),'1')>0){
                    res+=count(bank[j].begin(),bank[j].end(),'1')*count(bank[i].begin(),bank[i].end(),'1');
                    i=j-1;
                    break;
                }
            }
            }
        }
        return res;
    }
};