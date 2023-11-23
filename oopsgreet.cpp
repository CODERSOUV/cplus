#include<iostream>
using namespace std;
class greet{
    public:
    void greet1(){
        cout<<"Hello"<<endl;
    }
};
int main(){
    greet call;
    call.greet1();
    return 0;
}