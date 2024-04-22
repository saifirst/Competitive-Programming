/*
  ____        _  __   ____  _                  _     
 / ___|  __ _(_)/ _| | __ )| |_ ___  _   _ ___| |__  
 \___ \ / _` | | |_  |  _ \| __/ _ \| | | / __| '_ \ 
  ___) | (_| | |  _| | |_) | || (_) | |_| \__ \ | | |
 |____/ \__,_|_|_|   |____/ \__\___/ \__,_|___/_| |_|                                                   
                                                                                  
https://www.linkedin.com/in/saif-btoush/                                                                                                                                                                              
*/
using namespace std;
#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <string>
#include<vector>
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes cout<<"YES"<<endl;
#define sf scanf
#define no cout<<"NO"<<endl;
#define ll long long
#define input(arr); for(int i=0;i<n;i++)cin>>arr[i];
#define output(arr); for(int i=0;i<n;i++)cout<<arr[i]<<" ";
#define setoutput(set); for(auto i=set.begin();i!=set.end();i++)cout<<*i<<" ";
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define sortvec(ve); sort(ve.begin(),ve.end());
#define sortarr(arr); sort(arr,arr+n);
int main(){
ios::sync_with_stdio(0);
cin.tie(0);

int t;cin>>t;
vector<int>res;
string r="";
for(int i=0;i<t;i++){
    int c;cin>>c;
    res.push_back(c);
    if(res[i]>res[i-1])r="UP";
    if(res[i]<res[i-1])r="DOWN";
    if(res[i]<res[i-1]&&res[i]==1)r="DOWN";
    if(res[i]==15)r="DOWN";
    if(res[i]==0)r="UP";
}
if(res.size()==1){
    if(res[0]==0)r="UP";
    else if(res[0]==15)r="DOWN";
    else r="-1";
}
cout<<r<<endl;

}