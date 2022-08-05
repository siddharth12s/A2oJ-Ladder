#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    string t;
    cin>>t;

    string ans;

    int i=0;
 //   int j=0;
    while(t[i]!='\0'){
        if(t[i]=='A' or t[i]=='E' or t[i]=='I' or t[i]=='O' or t[i]=='U' or t[i]=='Y' or t[i]=='a' or t[i]=='e' or t[i]=='i' or t[i]=='o' or t[i]=='u' or t[i]=='y'){
            i++;
        }
        else{
            ans+='.';
            ans+=tolower(t[i]);
            i++;
        }
    }
    cout<<ans;

    return 0;
}
