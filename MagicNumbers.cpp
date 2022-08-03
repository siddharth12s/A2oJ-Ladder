#include<bits/stdc++.h> 
typedef long long ll;
using namespace std;

int main() {
    // your code goes here
    string n;
    cin>>n;

    bool flag=true;
    int i=0;
    while(n[i]!='\0'){

        if(n[i]=='1' and n[i+1]=='4' and n[i+2]=='4'){
                i+=3;
              continue;
        }
        else if(n[i]=='1' and n[i+1]=='4'){
            i+=2;
             continue;
        }
        else if (n[i]=='1'){
         i++;   
         continue;
        }
        else{
            flag=false;
            break;
        }
    }

    if(flag)    cout<<"YES";
    else    cout<<"NO";



    return 0;
}
