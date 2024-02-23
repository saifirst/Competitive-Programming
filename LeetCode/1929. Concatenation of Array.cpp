/*

███████  █████  ██ ███████     ██████  ████████  ██████  ██    ██ ███████ ██   ██ 
██      ██   ██ ██ ██          ██   ██    ██    ██    ██ ██    ██ ██      ██   ██ 
███████ ███████ ██ █████       ██████     ██    ██    ██ ██    ██ ███████ ███████ 
     ██ ██   ██ ██ ██          ██   ██    ██    ██    ██ ██    ██      ██ ██   ██ 
███████ ██   ██ ██ ██          ██████     ██     ██████   ██████  ███████ ██   ██ 
                                                                                  
https://www.linkedin.com/in/saif-btoush/                                                                                                                                                                              
*/
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>ve(2*n,0);
        for(int i=0;i<n;i++){
            ve[i]=nums[i];
            ve[i+n]=nums[i];
        }
        return ve;
    }
};
