/*1. 輸入降雨量Rain及風速Wind，Rain>=500或Wind>=10則輸出Carefully!，否則輸出Under Control*/

#include<iostream>
using namespace std;
int main(){
    int rain = 0;
    int wind = 0;//假定題目輸入為整數
    cout<<"Rain : ";
    cin>>rain;
    cout<<"Wind : ";
    cin>>wind;

    if(rain >= 500 || wind >=10){
        cout<<"Carefully! : "<<endl;
    }
    else{
        cout<<"Under Control"<<endl;
    }
    return 0;
}