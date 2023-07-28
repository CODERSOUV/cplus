#include<iostream>
using namespace std;

typedef struct employee{
    char name[50];
    float salary;
    int empid;
}office;
int main() {
    int n;
    cout << "Enter how many employee data you want to store: ";
    cin >> n;
    office empl[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter employee name: ";
        cin >> empl[i].name;
        cout << "Enter empid: ";
        cin >> empl[i].empid;
        cout << "Enter salary: ";
        cin >> empl[i].salary;
    }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " Employee name: " << empl[i].name << endl;
        cout << i + 1 << " Employee id: " << empl[i].empid << endl;
        cout << i + 1 << " Employee salary: " << empl[i].salary << endl;
    }

    return 0;
}
