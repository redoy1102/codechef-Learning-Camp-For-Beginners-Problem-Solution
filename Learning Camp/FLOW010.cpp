#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    char ch;
    cin>>T;
    if((T >= 1) && (T <= 1000)){
        while(T--){
            cin>>ch;
            if(ch == 'B' || ch == 'b'){
                cout<<"BattleShip"<<endl;
            }
            if(ch == 'C' || ch == 'c'){
                cout<<"Cruiser"<<endl;
            }
            else if(ch == 'D' || ch == 'd'){
                cout<<"Destroyer"<<endl;
            }
            else if(ch == 'F' || ch == 'f'){
                cout<<"Frigate"<<endl;
            }
        }
    }
    return 0;
}