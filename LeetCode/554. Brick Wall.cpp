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
    int leastBricks(vector<vector<int>>& wall) {
        map<int,int>gaps;
        int maxgaps=0;
        for(int i=0;i<wall.size();i++){
            int gap=0;
            for(int j=0;j<wall[i].size()-1;j++){
                gap+=wall[i][j];
                if(gaps.find(gap)==gaps.end()){
                    gaps[gap]=1;
                }
                else gaps[gap]++;
                maxgaps=max(maxgaps,gaps[gap]);
            }
        }
        return wall.size()-maxgaps;
    }
};