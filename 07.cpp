/*7.輸出n三方的級數*/

#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"N : ";
    cin>>n;
    for(int i = 1; i < n; i++){
        cout<<i<<"^3 + ";
    }
    cout<<n<<"^3"<<endl;
    return 0;
}
