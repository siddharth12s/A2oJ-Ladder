#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    unordered_map<string, int> m;
    while (t--)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    string ans;
    int mi=INT_MIN;
    for(auto& x: m){
        if(x.second>mi){
            mi=x.second;
            ans=x.first;
        }
    }

    cout<<ans;


    return 0;
}
