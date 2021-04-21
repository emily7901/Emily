#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    
    cout<<"enter any positive number: ";
    cin>>n;

    while (n>0)
    {
        sum += n;
        cout<<"enter an other positive number: ";
        cin>>n;
    }
    cout<<"the sum is: "<<sum<<endl;

    return 0;
}