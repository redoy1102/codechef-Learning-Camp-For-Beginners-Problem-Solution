#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int T, last, first, N;
    cin>>T;
        while(T--){
            cin>>N;
                last = N % 10;
                while(N > 9){
                    N /= 10;
                }
                first = N;
                cout<<(first + last)<<endl;
        }   
    
    return 0;
}