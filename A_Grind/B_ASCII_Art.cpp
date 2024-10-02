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
    //char samp='A';
    //cout<<(int)samp;
    int h,w;
    cin>>h>>w;
    int arr[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(arr[i][j]==0){
                cout<<".";
            }else{
                cout<<(char)(64+arr[i][j]);
            }
        }
        cout<<endl;
    }

    return 0;
}