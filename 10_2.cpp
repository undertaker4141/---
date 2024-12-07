/*輸入整數N，輸出下列圖形：*/

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout<<"N : ";
    cin>>n;
    for(int i = n-1; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
