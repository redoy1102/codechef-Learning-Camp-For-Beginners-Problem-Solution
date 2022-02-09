#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, c = 0;
    long long int t;
    cin>>n>>k;

    while(n--){
        cin>>t;
        if((t >= 0) && (t < 10^9)){
            if(t % k == 0){
                c++;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}