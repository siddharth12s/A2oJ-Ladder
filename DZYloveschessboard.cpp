#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n,m;
    cin >> n>> m;

    char chess[n][m];
    
    for(auto i=0;i<n;i++){
        for(auto j=0;j<m;j++){
            cin>>chess[i][j];
            if(chess[i][j]=='.'){
                if((i+j)%2) chess[i][j]='W';
                else    chess[i][j]='B';
            }
        }
    }

    for(auto i=0;i<n;i++){
        for(auto j=0;j<m;j++){
            cout<<chess[i][j];
        }
        cout<<endl;
    }



    return 0;
}
