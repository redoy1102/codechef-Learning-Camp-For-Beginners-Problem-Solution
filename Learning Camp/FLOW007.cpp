#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, rev = 0, r;
    long long int N;
    cin>>T;

    if((T >= 1) && (T <= 1000)){
        while(T--){
            cin>>N;
            if((N >= 1) && (N <= 1000000)){
                while(N != 0){
                    int r = N % 10;
                    rev = rev * 10 + r;
                    N /= 10;
                }
                cout<<rev<<endl;
                rev = 0;
            }
        }   
    }
    return 0;
}