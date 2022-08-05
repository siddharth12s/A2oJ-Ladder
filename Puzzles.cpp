#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int n,m;
    cin>>n>>m;

    int a[m];
    for(auto i=0;i<m;i++)
        cin>>a[i];
    
    sort(a,a+m);
    int mi=1e9;
    for(auto i=0;i<m;i++){
        if(i+n-1<m)
            mi=min(mi,a[i+n-1]-a[i]);
    }
    cout<<mi;

    return 0;
}
