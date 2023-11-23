#include <iostream>
#include <vector>
using namespace std;
int firstoccur(vector<int> &v,int target){
    for(int i=0;i<v.size();i++){
        if(v[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,target;
    cout<<"Enter size: ";
    cin>>n;
    vector<int> v1(0,n);
    int data;
    for(int i=0;i<n;i++)
    {   
        cout<<"Enter data: ";
        cin>>data;
        v1.push_back(data);
    }
    cout<<"Enter target: ";
    cin>>target;
    cout<<firstoccur(v1,target)<<endl;
    return 0;
}