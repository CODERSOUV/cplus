#include<iostream>
using namespace std;

void insert_any(int a[],int n,int pos,int data) {
    for (int i = n; i >= pos; i--)
        a[i] = a[i - 1];
    a[pos - 1] = data;
}

void insert_first(int a[],int n,int data) {
    for (int i = n; i >= 1; i--)
        a[i] = a[i - 1];
    a[0] = data;
}
void insert_last(int a[],int n,int data) {
    a[n] = data;
}
void delete_array(int a[],int &n,int pos){
   for (int i = pos-1;i < n-1;i++) {
        a[i] = a[i + 1];
    }
    n--;
  }
void display(int a[],int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    char ch;
    int n, data, pos;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    cout << "Enter elements in the array:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];


    while (true) {
         cout << "Press 1 to insert in any position\nPress 2 to insert in the first position\nPress 3 to insert in the last position\nPress 4 to delete\nPress 5 to display\nPress 6 to exit\n";
        cin >> ch;
        switch (ch) {
        case '1':
            cout << "Enter data and position to insert:\n";
            cin >> data >> pos;
            insert_any(a, n, pos, data);
            break;
        case '2':
            cout << "Enter data to insert in the first position:\n";
            cin >> data;
            insert_first(a,n,data);
            break;
        case '3':
            cout << "Enter data to insert in the last position:\n";
            cin >> data;
            insert_last(a,n,data);
            break;
        case '4':
            cout<<"Enter position to delete:\n";
            cin>>pos;
            delete_array(a,n,pos);
            break;
        case '5':
            display(a,n);
            break;
        case '6':
            cout << "Exiting the program.\n";
            return 0;
        default:
            cout << "Entered wrong input\n";
            break;
        }
    }

    return 0;
}
