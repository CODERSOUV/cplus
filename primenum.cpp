#include<iostream>
using namespace std;

int main(){
    int n,flag=0;
    cout<<"Enter a number:"<<endl;
    std::cin>>n;
    if(n==0||n==1)
      cout<<n<<" is prime number";
      for(int i=2;i<=n/2;i++){
        if(n%i==0){
        flag=1;
        break;
      }
}
if(flag==0)
cout<<n<<" is prime number"<<endl;
else
cout<<n<<" is not prime number"<<endl;
}