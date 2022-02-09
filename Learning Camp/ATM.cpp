#include<bits/stdc++.h>
using namespace std;
int main(){
    int X;
    float Y;
    cin>>X>>Y;

    if(((X > 0) && (X <= 2000)) && ((Y >= 0) && (Y <= 2000))){
            if(X %5 == 0){

                float withdraw = (X + 0.50);
                if(withdraw <= Y){
                    cout<<fixed<<setprecision(2)<<(Y-withdraw)<<endl;
                }
                else{
                    cout<<fixed<<setprecision(2)<<Y<<endl;
                }
            }
            else{
                cout<<fixed<<setprecision(2)<<Y<<endl;
            }
    }


    return 0;
}