/*輸入整數N ，印出N×N 的Hilbert 矩陣*/

#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"N : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<1<<'/'<<(i + j - 1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
