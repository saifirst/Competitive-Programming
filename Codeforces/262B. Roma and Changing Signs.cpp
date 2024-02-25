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
int main(){
    int n,k;cin>>n>>k;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0&&k>0){
            arr[i]*=-1;
            k--;
        }
        sum+=arr[i];
    }
    if(k>0&&k%2!=0){
    sort(arr,arr+n);
    while(k>0){
        arr[0]*=-1;k--;
    }
    sum+=arr[0]*2;
    }
    cout<<sum<<endl;
}