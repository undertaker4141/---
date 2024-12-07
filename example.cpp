/*輸入身高(公分)Height，輸入體重(公斤)Weight，BMI = 體重/(身高/100)2*/

#include <iostream>
using namespace std;

int main() {
    double height = 0;
    double weight = 0;
    double bmi = 0;
    cout<<"Height : ";
    cin>>height;
    cout<<"Weight : ";
    cin>>weight;
    bmi = weight / (height / 100 * height / 100);
    cout<<bmi<<endl;
    if(bmi < 18.5){
        cout<<"Your BMI is ";
        cout<<bmi;
        cout<<" ... Thin ..."<<endl;
    }else if(bmi >= 18.5 && bmi < 24){
        cout<<"Your BMI is ";
        cout<<bmi;
        cout<<" ... Ok ..."<<endl;
    }else if(bmi >= 24 && bmi < 27){
        cout<<"Your BMI is ";
        cout<<bmi;
        cout<<" ... Fat ..."<<endl;
    }else{
        cout<<"Your BMI is ";
        cout<<bmi;
        cout<<" ... Too Fat ..."<<endl;
    }
    return 0;
}

