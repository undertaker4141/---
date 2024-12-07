/*5. 輸入一整數Num，判斷輸出Odd或Even*/

#include<iostream>
using namespace std;
int main(){
    int num = 0;
    cout<<"Num : ";
    cin>>num;
    if(num % 2 == 0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    return 0;
}

