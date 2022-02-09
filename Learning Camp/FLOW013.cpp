#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, A, B, C, sum = 0;
    cin>>T;
    if((T >= 1) && (T <= 1000)){
        while(T--){
            cin>>A>>B>>C;
            if((A >= 1) && (A <= 180) && (B >= 1) && (B <= 180) && (C >= 1) && (C <= 180)){
                sum += (A+B+C);
                if(sum == 180){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
                sum = 0;
            }
        }   
    }
    return 0;
}