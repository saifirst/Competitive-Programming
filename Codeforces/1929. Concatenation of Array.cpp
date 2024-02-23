/*
          _____                    _____                    _____                    _____          
         /\    \                  /\    \                  /\    \                  /\    \         
        /::\    \                /::\    \                /::\    \                /::\    \        
       /::::\    \              /::::\    \               \:::\    \              /::::\    \       
      /::::::\    \            /::::::\    \               \:::\    \            /::::::\    \      
     /:::/\:::\    \          /:::/\:::\    \               \:::\    \          /:::/\:::\    \     
    /:::/__\:::\    \        /:::/__\:::\    \               \:::\    \        /:::/__\:::\    \    
    \:::\   \:::\    \      /::::\   \:::\    \              /::::\    \      /::::\   \:::\    \   
  ___\:::\   \:::\    \    /::::::\   \:::\    \    ____    /::::::\    \    /::::::\   \:::\    \  
 /\   \:::\   \:::\    \  /:::/\:::\   \:::\    \  /\   \  /:::/\:::\    \  /:::/\:::\   \:::\    \ 
/::\   \:::\   \:::\____\/:::/  \:::\   \:::\____\/::\   \/:::/  \:::\____\/:::/  \:::\   \:::\____\
\:::\   \:::\   \::/    /\::/    \:::\  /:::/    /\:::\  /:::/    \::/    /\::/    \:::\   \::/    /
 \:::\   \:::\   \/____/  \/____/ \:::\/:::/    /  \:::\/:::/    / \/____/  \/____/ \:::\   \/____/ 
  \:::\   \:::\    \               \::::::/    /    \::::::/    /                    \:::\    \     
   \:::\   \:::\____\               \::::/    /      \::::/____/                      \:::\____\    
    \:::\  /:::/    /               /:::/    /        \:::\    \                       \::/    /    
     \:::\/:::/    /               /:::/    /          \:::\    \                       \/____/     
      \::::::/    /               /:::/    /            \:::\    \                                  
       \::::/    /               /:::/    /              \:::\____\                                 
        \::/    /                \::/    /                \::/    /                                 
         \/____/                  \/____/                  \/____/                                  
                                                                                                    
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
bool stringinsidestring(string base,string searchfor)
{
    bool res;
    if(base.find(searchfor)!=string::npos)res=true;
    return res;
}
bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second < b.second;
}
int mostfreq(int arr[],int size)
{
    map<int, int> freq;
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0, mostFreqNum = 0;
    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->second > maxFreq) {
            maxFreq = it->second;
            mostFreqNum = it->first;
        }
    }
    return mostFreqNum;
}
// int find()
// {
// // Find the index of the smallest element
//     int* min_ptr = min_element(arr, arr + n);
//     int min_index = distance(arr, min_ptr);

// // Find the index of the largest element
// int* max_ptr = std::max_element(arr, arr + n);
//     int max_index = std::distance(arr, max_ptr);
// }
bool hasRepeat(const string& s) {
    std::unordered_map<char, int> last_seen;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (last_seen.find(c) != last_seen.end() && i - last_seen[c] > 1) {
            return true;
        }
        last_seen[c] = i;
    }
    return false;
}
#include <stack>
//remove duplicates from string
string rdstring(string s)
{
    unordered_set<char> seen;
    string result;

    for (char c : s) {
        if (!seen.count(c)) {
            seen.insert(c);
            result += c;
        }
    }
    return result;
}
bool isPermutation(const set<int>& s) {
    int n = s.size();
    for (int i = 1; i <= n; ++i) {
        if (s.count(i) == 0) {
            return false;
        }
    }
    return true;
}

//remove all previous numbers between number in array
// for (int i = 0; i < size; i++) 
// {
//         if (arr[i] == 3) {
//             for (int j = i; j < n - 1; j++) {
//                 arr[j] = arr[j+1]; // shift elements to the left
//             }
//             n--; // update size of array
//             break;
//         }
//         }

vector<int> predictDays(vector<int> day, int k) {
    vector<int>res;
    for(int i=k;i<day.size()-k;i++){
        int pd=i-k,nd=i+k;
        bool pdch=true;
        bool ndch=true;
        while(pd<(k+pd)){
            if(day[pd]>=day[pd+1]){
                pd++;
            }
            else{
                pdch=false;
                break;
            }
        }
        while(nd>(abs(k-nd))){
            if(day[nd]>=day[nd-1]){
                nd--;
            }
            else{
                ndch=false;
                break;
            }
        }
        if(pdch&&ndch)
        {res.push_back(day[i]);}
    }
    return res;
}

bool inthere(string x, string s){
    string xop="";
    for(int i=0;i<x.length();i++)
    {
        int counter=i;
        while(counter<=s.length()+i-1){
            xop+=x[counter];
            counter++;
        }
        
        if(xop==s) return true;
        else xop="";
    }
    return false;
}

bool ispalindrom(string s){
    string r=s;
    reverse(r.begin(),r.end());
    if(s==r)return true;
    else return false;
}

bool is_c(char c1){
    if(c1!='a'&&c1!='e')return true;
    else return false;
}
bool is_v(char c2){
    if(c2=='a'||c2=='e')return true;
    else return false;
}
struct Triple {
    int first;
    int second;
    int third;

    Triple(int f, int s, int t) : first(f), second(s), third(t) {}
};
bool comparePairs(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}
int summa(int num){
    int res=0;
    while(num>0){
        res+=(num%10);
        num/=10;
    }
    return res;
};
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
// abcdefghijklmnopqrstuvwxyz
int main(){
    // freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout); 
    ios_base::sync_with_stdio(false);
    Solution s1;

    vector<int>ve={1,3,2,1};
    // int x=-121;
    cout<<"done";
    s1.getConcatenation(ve);
    
    
    
}