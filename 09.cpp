/*9. 輸入整數N，輸出N X N乘法表(或變形)*/

#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"N : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<j<<"*"<<i<<"="<<i*j<<" ";
        }
        for(int j = n-1; j >= 1; j--){
            cout<<j<<"*"<<i<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
