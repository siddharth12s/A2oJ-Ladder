#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    string s;
    cin>>s;

    string st="hello";
    int j=0,pass=0;
  //  cout<<st<<endl;
    for(auto i=0;i<s.length();i++){
        if(s[i]==st[j]){
            j++;
            pass++;
        }

        if(pass==5)
            break;
    }

    if(pass==5) cout<<"YES";
    else    cout<<"NO";

    return 0;
}
