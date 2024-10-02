#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <string>

using namespace std;
typedef long long int ll;

int main() {
    // code here
    int n; cin>>n;
    string s; cin>>s;
    int flag=0;
    if(s[0]=='M') flag=0;
    else flag=1;
    // cout<<flag;
    for(int i=0;i<n;i++){
       if(flag==0 && s[i]=='M'){
        flag=1;
       }
       else if(flag==1 && s[i]=='F'){
        flag=0;
        
       }else{
        // cout<<"ho";
        flag=2;
        break;
       }
    }
    //  cout<<flag;
    if(flag==2) cout<<"No";
    else cout<<"Yes";
    return 0;
}