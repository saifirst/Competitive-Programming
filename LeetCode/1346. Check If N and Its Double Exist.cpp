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
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0&&arr[i]!=0){
                if(count(arr.begin(),arr.end(),arr[i]/2)||count(arr.begin(),arr.end(),arr[i]*2))
                return true;
            }
            else if(arr[i]==0&&count(arr.begin(),arr.end(),arr[i])>1){return true;}
        }
            return false;
    }
};