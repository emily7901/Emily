#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"enter any charecter: ";
    cin>>a;

    int isUpperCaseVowel, isLowerCaseVowel;
    isUpperCaseVowel= (a=='A' || a=='E' || a=='I' || a=='O' || a=='U');
    isLowerCaseVowel= (a=='a' || a=='e' || a=='i' || a=='o' || a=='u');

    if(isUpperCaseVowel || isLowerCaseVowel){
        cout<<a<<" is a vowel";
    }
    else{
        cout<<a<<" is a constant";
    }

    return 0;
}