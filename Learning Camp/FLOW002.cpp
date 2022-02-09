#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, A, B;
    cin>>T;
    if((T >= 1) && (T <= 1000)){
        while(T--){
            cin>>A>>B;
            if((A >= 1) && (A <= 10000) && (B >= 1) && (B <= 10000)){
                int r = A % B;
                cout<<r<<endl;
                r = 0;
            }
        }   
    }
    return 0;
}