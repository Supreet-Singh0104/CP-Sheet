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
    int n,q;
    cin>>n>>q;
    vector<int> arr(n+1,0);
    for(int i=1;i<=q;i++){
        int e,t; cin>>e>>t;
       // cout<<e<<" "<<arr[t]<<endl;
        if(e==3){
            
            if(arr[t]>=2){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else if(e==1){
            arr[t]++;
        }else{
            
            arr[t]=2;
        }
    }
    return 0;
}