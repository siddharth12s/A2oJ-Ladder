#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int n;
    cin>>n;

    int a[n];

    for(auto i=0;i<n;i++)
        a[i]=i+1;

    for(auto i=n-1;i>0;i--){
        swap(a[i],a[i-1]);
    }

    for(auto i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
