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
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int smallest=INT_MAX;
        for(int i=0;i<nums.size();i++){
            smallest=min(smallest,abs(nums[i]));
        }
        for(int i=0;i<nums.size();i++){
            if(k>0){
                if(nums[i]>0){
                    if(k%2==0)sum+=nums[i];
                    else{
                        sum+=nums[i];
                        sum+=(smallest*-1)*2;
                    }
                    k=0;
                }
                else{
                    sum+=abs(nums[i]);
                    k--;
                }
            }
            else{
                sum+=nums[i];
                k--;
            }
            
        }
        if(k>0){
            sum+=(smallest*-1)*2;
        }
        return sum;
        
    }
};