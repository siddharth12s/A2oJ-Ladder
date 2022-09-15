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
    int mi=INT_MAX;
    for(auto i=0;i<m;i++){
        mi=min(mi,a[i+n-1]-a[i]);
    }
    cout<<mi;

    return 0;
}
