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
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res(2,0);
        vector<int>all;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                all.push_back(grid[i][j]);
            }
        }
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(count(all.begin(),all.end(),i)==2)res[0]=i;
            else if(count(all.begin(),all.end(),i)==0)res[1]=i;
        }
        return res;
    }
};