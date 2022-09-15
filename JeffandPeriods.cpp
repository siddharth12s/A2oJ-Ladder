#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main() {
    // your code goes here
    int n;
    cin>>n;
    int a[n];

    int ma=INT_MIN;
    for(auto i=0;i<n;i++){
          cin>>a[i];
            ma=max(ma,a[i]);
    }

    vector<int> v[ma+1];

    for(auto i=0;i<n;i++){
        v[a[i]].push_back(i+1);
    }

    int ans=0;
    vector<pair<int,int>> p;

    for(auto i=1;i<=ma;i++){
        if(v[i].size()==0)  continue;
        else if(v[i].size()==1)
             p.push_back({i,0});
        else{
            int diff= v[i][1]-v[i][0];
            int flag=1;
            for(auto j=1;j<v[i].size();j++){
                if(v[i][j]-v[i][j-1]!=diff){
                    flag=0;
                    break;
                }
            }
            if(flag){
                p.push_back({i,diff});
            }
        }
            
    }

    cout<<p.size()<<endl;
    for(auto x: p){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
