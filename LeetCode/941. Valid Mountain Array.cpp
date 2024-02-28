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
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)return false;
        int pos=distance(arr.begin(),max_element(arr.begin(),arr.end()));
        // before
        for(int i=pos-1;i>0;i--){
            if(arr[i]>=arr[pos]||arr[i]<=arr[i-1])return false;
        }
        if(arr[0]>=arr[pos])return false;
        // after
        for(int i=pos+1;i<arr.size()-1;i++){
            if(arr[i]>=arr[pos]||arr[i]<=arr[i+1])return false;
        }
        if(arr[arr.size()-1]>=arr[pos])return false;

        return true;
    }
};