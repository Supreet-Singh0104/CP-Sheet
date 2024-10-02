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
    int q; 
    cin>>q;
    while(q--){
        int n; cin>>n;
        double twoc_copy=(double)n/3;
        int twoc=n/3;
       // cout<<twoc_copy<<"  "<<twoc<<endl;
        if(twoc_copy-0.5>twoc){
            twoc++;
        }
       // cout<<twoc<<endl;
        int onec=n-2*twoc;
        cout<<onec<<" "<<twoc<<endl;
    }
    return 0;
}