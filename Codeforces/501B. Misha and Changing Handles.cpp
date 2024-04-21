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
vector<string>res;
while(t--){
    string a,b;cin>>a>>b;
    if(count(res.begin(),res.end(),a)>0){
        auto it=find(res.begin(),res.end(),a);
        int index = distance(res.begin(), it);
        res[index]=b;
    }
    else{
        res.push_back(a);
        res.push_back(b);
    }
}
cout<<res.size()/2<<endl;
int len=0;
for(auto i:res){
    cout<<i<<" ";
    if(len%2!=0)cout<<endl;
    len++;
}
}