#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    int n,m;
    cin>>n;
    double a[n];
    for(auto i=0;i<n;i++)
        cin>>a[i];
    
    cin>>m;
    double b[m];
    for(auto i=0;i<m;i++)
        cin>>b[i];

    map<int,int> u;
    for(auto i=0;i<n;i++){
        for(auto j=0;j<m;j++){
            double k = (double)b[j]/a[i];
            if(k==ceil(b[j]/a[i]))
                u[(int)k]++;
        }
    }

    int mi = 0;
    int ans=0;

    for(auto& x: u){
        int k = x.first;
        if(k>mi){
            mi=k;
            ans=x.second;
        }
    }

    cout<<mi<<" "<<ans;
    return 0;
}
