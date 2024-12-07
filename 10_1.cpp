/*輸入整數N，輸出下列圖形：*/

#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cout<<"N : ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
