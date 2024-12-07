 /*2.產生範圍為51-99的亂數，並輸出亂數*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));//設定亂數種子
    int random = rand() % 49 + 51;//產生範圍為51-99的亂數   
    cout<<"Random : "<<random<<endl;
    return 0;
}
