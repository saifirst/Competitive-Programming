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
    int n;cin>>n;
    vector<int>srtd;
    vector<int>arr;
    int res1=0,res2=0;
    int cn;
    for(int i=0;i<n;i++){
        cin>>cn;
        arr.push_back(cn);
        srtd.push_back(cn);
    }
    int cntr=0;
    bool br=false;
    sort(srtd.begin(),srtd.end());
    for(int i=0;i<n;i++){
        if(arr[i]!=srtd[i]){
            for(int j=i+1;j<n;j++){
                if(arr[j]==srtd[i]){
                    reverse(arr.begin()+i,arr.begin()+j+1);
                    res1=i;
                    res2=j;
                    br=true;
                    break;
                }
            }
            if(br)break;
        }
    }
    if(arr==srtd){cout<<"yes\n"<<res1+1<<" "<<res2+1;}
    else cout<<"no"<<endl;
}