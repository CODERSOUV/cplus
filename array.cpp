#include<iostream>
#include<cmath>
using namespace std; 
class first{
    public:
        int data;
        void sq(){
            cout<<sqrt(data);
        }
};
int main(){
    first obj;
    cin>>obj.data;
    obj.sq();
}