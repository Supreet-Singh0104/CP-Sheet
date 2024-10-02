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
    int n; int d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=-1;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=d){
            ans=arr[i];
            break;
        }
    }
    cout<<ans;
    return 0;
}