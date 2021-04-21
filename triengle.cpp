#include<iostream>
using namespace std;

int main(){
    int side1,side2,side3;
    cout<<"enter sides: ";
    cin>>side1>>side2>>side3;

    if(side1==side2 && side2==side3){
        cout<<"equatorial triangle";
    }
    else if(side1==side2 || side2==side3 || side1==side3){
        cout<<"isoscele triangle";
    }
    else{
        cout<<"scalenes triangle";
    }


    return 0;
}