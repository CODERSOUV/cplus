#include<iostream>
using namespace std;
bool flag=false;
int linear_search(int arr[],int n,int target){
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=true;
            return i;
        }
    }
    
        return 0;
}
int main(){
    int arr[]={1,2,3,4,5};
    int target=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<linear_search(arr,n,target);
}