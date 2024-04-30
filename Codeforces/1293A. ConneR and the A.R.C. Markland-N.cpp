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
 
ll t;cin>>t;
while(t--){
ll minres=INT_MAX;
   ll n,s,k;cin>>n>>s>>k;
   vector<ll>closed;
   for(ll i=0;i<k;i++){
         int x;cin>>x;
         closed.push_back(x);
   } 
   for(ll i=s;i<=n;i++){
    if(find(closed.begin(),closed.end(),i)==closed.end()){
        minres=min(minres,i-s);
        break;
    }
   }
   for(ll i=s;i>=1;i--){
    if(find(closed.begin(),closed.end(),i)==closed.end()){
        minres=min(minres,s-i);
        break;
    }
   }
   cout<<minres<<endl;
}
 
}