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
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
ll t;cin>>t;
while(t--){
ll maxx,known,unknown;
cin>>maxx>>known>>unknown;
ll locations[known+1];
ll times[known+1];
locations[0]=0;
times[0]=0;
for(ll i=1;i<=known;i++)cin>>locations[i];
for(ll i=1;i<=known;i++)cin>>times[i];
for(ll i=0;i<unknown;i++){
    ll x;cin>>x;
    if(x==0){cout<<"0 ";continue;}
    if(x==maxx){cout<<times[known]<<" ";continue;}
    ll index=upper_bound(locations,locations+known+1,x)-locations;
    ll res=times[index-1];
    res+=((x-locations[index-1])*(times[index]-times[index-1]))/(locations[index]-locations[index-1]);
    cout<<res<<" ";
}
cout<<endl;
}
}