#include<bits/stdc++.h>
using namespace std;
int main(){
    int T, A, c = 0;
    cin>>T;
    if((T >= 1) && (T <= 10^5)){
        while(T--){
            cin>>A;
            while(A != 0){
                int r = A % 10;
                A /= 10;
                if(r == 4){
                    c++;
                }
            }
            cout<<c<<endl;
            c = 0;
        }   
    }
    return 0;
}