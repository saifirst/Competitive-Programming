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
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int res=0;
        int sumapples=0;
        for(int i=0;i<apple.size();i++)sumapples+=apple[i];
        int sum=0;
        for(int i=capacity.size()-1;i>=0;i--){
            sum+=capacity[i];
            if(sum<sumapples)res++;
            else {res++;break;}
        }
        return res;
    }
};