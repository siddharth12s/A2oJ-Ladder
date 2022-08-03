#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int n,m;
    cin>>n>>m;

    int a[n];
    for(auto i=0;i<n;i++)
        cin>>a[i];
    

    sort(a,a+n);
    int ans=0;
    if(a[0]>=0) cout<<"0";
    else{
        for(auto i=0;i<m;i++)
            if(a[i]<=0)
                ans+=a[i];
        
        cout<<abs(ans);
    }

    return 0;
}
