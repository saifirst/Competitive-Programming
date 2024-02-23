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
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;
        int max=0;
        while(l<r&&r<prices.size()){
            if(prices[r]<=prices[l]){
                l=r;
                r++;
            }
            else{
                if(prices[r]-prices[l]>max){
                    max=prices[r]-prices[l];
                }
                r++;
            }
        }
        return max;
    }
};