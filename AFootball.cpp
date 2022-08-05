#include<bits/stdc++.h> 
using namespace std;

int main() {
    // your code goes here
    string s;
    cin>>s;

    string one = "1111111";
    string zero = "0000000";

    size_t found0 = s.find(zero);
    size_t found1 = s.find(one);

    if(found0!=string::npos or found1!=string::npos)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
