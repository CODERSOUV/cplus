#include<iostream>
using namespace std;
    typedef struct st{
       char name[30];
       int roll;
    }cl;
int main (){
  cl scl[30];
  int n,r,flag=0;
  cout<<"Enter no of students data you want to add"<<endl;
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<"Enter name of student "<<i+1<<endl;
    cin>>scl[i].name;
    cout<<"Enter roll of student "<<i+1<<endl;
    cin>>scl[i].roll;
  }
cout<<"<-----Displaying student details---->"<<endl;
 for(int i=0;i<n;i++){
    cout<<"Name of the student "<<i+1<<" is :"<<scl[i].name<<endl;
    cout<<"Roll of student "<<i+1<<"is"<<scl[i].roll<<endl;
  }
cout<<"Enter roll no to serach";
cin>>r;
for(int i=0;i<n;i++){
    if(r==scl[i].roll){
    cout<<"Name of the student with roll "<<r<<" is: "<<scl[i].name<<endl;
    flag=1;
    break;
    }
}
if(flag==0){
    cout<<"No students found!!"<<endl;
}
}