#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int n,a,b;
    cin>>n>>a>>b;  

    int pos=max(a+1,n-b);

    cout<<n-pos+1;

    return 0;
}
