#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int T, A, B;
    cin>>T;

    if((T >= 1) && (T <= 10000)){
        while(T--){
            cin>>A>>B;
            if((A >= 1) && (A <= 1000000001) && (B >= 1) && (B <= 1000000001)){

                if(A < B){
                    cout<<"<"<<endl;
                }
                else if(A > B){
                    cout<<">"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }

            }
        }   
    }
    return 0;
}