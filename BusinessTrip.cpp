#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;

    int a[12];
    for(auto i=0;i<12;i++)
        cin>>a[i];
    
    sort(a,a+12);

    int ans=0;
    int i=11;
    while(i>=0 and t>0){
        t-=a[i];
        ans++;
        i--;
    }

    if(t>0) cout<<-1;
    else
        cout<<ans;

    return 0;
}
