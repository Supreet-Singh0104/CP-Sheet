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
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==1){ cout<<"NO"<<endl;
        continue;}
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.end());
        vector<int> ans(n);
        int j=0;
        int k=n/2;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=arr[j++];
            }else{
                cout<<"hello";
                ans[i]=arr[k++];
            }
        }
        int flag=0;
        for(int i=1;i<n-1;i++){
            if(ans[i]>ans[i-1] && ans[i]>ans[i+1]){
                continue;
            }else if(ans[i]<ans[i-1] && ans[i]<ans[i+1]){
                continue;
            }else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<endl;
    
    }
    return 0;
}   