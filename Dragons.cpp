#include<bits/stdc++.h> 
using namespace std;

static bool comp(pair<int,int>& p1,pair<int,int>& p2){
    return p1.first<p2.first;
}

int main() {
    // your code goes here
    int s,t;
    cin>>s>>t;
    vector<pair<int,int>> v;
    for(auto i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end(),comp);
    bool flag=false;

    for(auto i=v.begin();i!=v.end();i++){
        if(s>i->first){
            s+=i->second;
            flag=true;
        }
        else{
            flag=false;
            break;
        }
    }

    if(flag)    cout<<"YES";
    else    cout<<"NO";
    return 0;
}
