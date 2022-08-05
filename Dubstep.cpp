#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    string s;
    cin>>s;

    string ans;

    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
            if(i==0){
                i+=3;
                continue;
            }
            else if(ans[ans.length()-1]==' '){
                i+=3;
                continue;
            }
            else{
                ans+=' ';
                i+=3;
                continue;
            }
        }
        else{
            ans+=s[i];
            i++;
        }
    }
    cout<<ans;
    

    return 0;
}
