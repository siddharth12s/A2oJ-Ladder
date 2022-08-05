#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int n,m;
    cin>>n>>m;

    int a[m],b[m];
    for(auto i=0;i<m;i++){
        cin>>a[i];
        b[i]=a[i];
    }

    int mi=0;
    int cnt=0;
    sort(b,b+m);
    for(auto i=0;i<m;i++){
        while(b[i]!=0 and cnt!=n){
            mi += b[i];
            b[i]--;
            cnt++;
        }
    }

    int ma=0;
    for(auto i=0;i<m;i++){
        b[i]=a[i];
    }

    sort(b, b + m);
    for(auto i=0;i<n;i++){
        ma+=b[m-1];
        b[m-1]--;
        sort(b,b+m);
    }
    cout<<ma<<" "<<mi;
    return 0;
}
