/*
  ____        _  __   ____  _                  _     
 / ___|  __ _(_)/ _| | __ )| |_ ___  _   _ ___| |__  
 \___ \ / _` | | |_  |  _ \| __/ _ \| | | / __| '_ \ 
  ___) | (_| | |  _| | |_) | || (_) | |_| \__ \ | | |
 |____/ \__,_|_|_|   |____/ \__\___/ \__,_|___/_| |_|                                                   
                                                                                  
https://www.linkedin.com/in/saif-btoush/                                                                                                                                                                              
*/
int main(){
    int n;cin>>n;
    int arr[n];
    set<int>freq;
    for(int i=0;i<n;i++){
        int cn;cin>>cn;
        freq.insert(cn);
    }
    if(freq.size()==3){
        int c1,c2,c3;
        int i=0;
        for(auto v:freq){
            if(i==0)c1=v;
            else if(i==1)c2=v;
            else if(i==2)c3=v;
            i++;
        }
 
        if(c3-c2==c2-c1)yes
        else no
    }
    else if(freq.size()>3)no
    else yes
}