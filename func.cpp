#include<iostream>
using namespace std;
void str1(string a){
    cout<<a<<"World"<<endl;
}
void myFunction(string country = "Norway") {
  cout << country << "\n";
}
int main(){
    string b="Hello";
    str1(b);
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");
return 0;
}