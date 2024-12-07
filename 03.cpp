/*將成績Score百分制換成A, B, C, D, F等級，若分數不合理則輸出？號*/

#include<iostream>
using namespace std;
int main(){
    int score = 0;
    cout<<"Score : ";
    cin>>score;
    if(score >= 90 && score <= 100){
        cout<<"A"<<endl;
    }   
    else if(score >= 80 && score <= 89){
        cout<<"B"<<endl;
    }      
    else if(score >= 70 && score <= 79){
        cout<<"C"<<endl;
    }
    else if(score >= 60 && score <= 69){
        cout<<"D"<<endl;
    }
    else if(score >= 0 && score <= 59){
        cout<<"F"<<endl;
    }
    else{
        cout<<"?"<<endl;
    }
    return 0;
}

