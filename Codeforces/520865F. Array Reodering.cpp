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
while(t--){
    int res=0;
    int n;cin>>n;
    vector<int>arr(n);
    vector<int>odds;
    vector<int>evens;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)evens.push_back(arr[i]);
        else odds.push_back(arr[i]);
    }
    vector<int>arr2;
    sort(evens.begin(),evens.end());
    sort(odds.begin(),odds.end());
    for(int i=0;i<evens.size();i++){
        arr2.push_back(evens[i]);
    }
    for(int i=0;i<odds.size();i++){
        arr2.push_back(odds[i]);
    }
    for(int i=0;i<arr2.size();i++){
        if(arr2[i]%2==0){
            res+=n-i-1;
        }
        else{

        for(int j=i+1;j<arr2.size();j++){
            if(__gcd(arr2[i],2*arr2[j])>1)res++;
        }
        }
    }
    cout<<res<<endl;
    

}