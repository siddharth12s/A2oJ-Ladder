#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    unordered_map<char,int> m;

    string s;
    cin>>s;

    for(auto i=0;i<s.length();i++){
        m[s[i]]++;
    }

    string ans;
    for(auto& x: m){
        if(x.second%t!=0){
            cout<<-1;
            return 0;
        }
        else{
            int times = x.second/t;
            while(times--)  ans.push_back(x.first);
        }
    }

    string old=ans;
    while(--t)  ans+=old;
    reverse(ans.begin(),ans.end());
    cout<<ans;


    return 0;
}
