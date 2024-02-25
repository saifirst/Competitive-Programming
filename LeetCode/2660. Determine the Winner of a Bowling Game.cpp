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
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int w1=0,w2=0;
        for(int i=0;i<player1.size();i++){
            bool d1=false;
            bool d2=false;
            if((i-1>=0&&player1[i-1]==10)||((i-2)>=0&&player1[i-2]==10)){
                d1=true;
            }
            if((i-1>=0&&player2[i-1]==10)||((i-2)>=0&&player2[i-2]==10)){
                d2=true;
            }
            
            if(d1)w1+=player1[i]*2;
            else w1+=player1[i];
            if(d2)w2+=player2[i]*2;
            else w2+=player2[i];
        }
        if(w1>w2)return 1;
        else if(w2>w1)return 2;
        else return 0;
    }
};