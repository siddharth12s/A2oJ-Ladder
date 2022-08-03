#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int n,m;
    cin>>n>>m;

    int a,b,cnt=0;

    for(a=0;a<=sqrt(n);a++){
        b=n-a*a;
        if(a+b*b==m)
            cnt++;
    }
    cout<<cnt;

    return 0;
}
