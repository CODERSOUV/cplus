#include<iostream>
using namespace std;

void delete_array(int [],int,int);
void print_array(int[],int);
int main(){
char ch;
int pos,n;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<"Enter your choice\nPress 1 to delete";
cin>>ch;
switch(ch){
    case '1':
    cout<<"Enter the position you want to delete";
    cin>>pos;
    delete_array(arr,n,pos);
    print_array(arr,n-1);
    cout<<endl;
    break;
}
return 0;
}

void delete_array(int a[],int n,int pos){
     for(int i=pos-1;i<n-1;i++)
     a[i]=a[i+1];
}
void print_array(int a[],int n){
    cout<<"Elements in array"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i];
}