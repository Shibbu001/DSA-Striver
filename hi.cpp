#include<iostream>
using namespace std;

void pattern1(int n){
     for (int i=0;i<n;i++){
         for (int j=0;i<n;j++){
            cout << "* ";
         }
     cout<< endl;    
     }
}

int main()
{   
    int arr[5];
    for (int i=0;i<5;i++){
        cin >> arr[i];
    }
    for (int i=0;i<5;i++){
        cout << arr[i] << endl;
       
    }

    return 0;
}