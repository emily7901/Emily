#include<iostream>
using namespace std;

int main(){

    float n1,n2;
    cout<<"enter 2 numbers: ";
    cin>>n1>>n2;

    char op;
    cout<<"enter operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;

    case '-':
        cout<<n1-n2<<endl;
        break;
    
    case '*':
        cout<<n1*n2<<endl;
        break;

    case '/':
        cout<<n1/n2<<endl;
        break;

    default:
        cout<<"enter another operator"<<endl;
        break;
    }
    
    return 0;
}