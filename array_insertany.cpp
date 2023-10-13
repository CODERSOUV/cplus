#include<iostream>
using namespace std;

void insert_any(int a[],int &n,int pos,int data) {
    for (int i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = data;
    n++;
}
void display(int a[],int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main(){
    int n,pos,data;
cout<<"Enter the size of the array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
    cout << "Enter data and position to insert:\n";
    cin >> data >> pos;
    insert_any(arr,n,pos,data);
    display(arr,n);
return 0;
}
