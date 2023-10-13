#include<iostream>
using namespace std;
int main(){
    // int *b,a;
    // a=11;
    // b=&a;
    // cout<<"The address of b "<<b<<endl;
    // cout<<"The value of a= "<<*b<<endl;
    int i, j = 26;

    int *pi, *pj = &j;
    *pj = j + 5;
    i = *pj + 5;
    pi = pj;
    *pi = i+j;
    cout<<&i<<endl;
    cout<<*pi<<endl;
    cout<<*pj;
}