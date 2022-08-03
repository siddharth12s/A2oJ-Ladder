#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    // your code goes here
    ll n,m;
    cin>>n>>m;

    ll a[m];
    for(auto i=0;i<m;i++)
        cin>>a[i];
    
    ll ans=0;
    ll cur=1;
    //int prev;
    for(auto i=0;i<m;i++){
        if(cur<=a[i]){
            ans+=a[i]-cur;
            cur=a[i];
        }
        else{
            ans+=n-cur+a[i];
            cur=a[i];
        }
    }

    cout<<ans;

    return 0;
}
