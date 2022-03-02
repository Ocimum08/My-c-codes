#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    cout << "Enter the elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int *p;
    p = arr;
    cout << "Your elements: ";
    for(int i = 0; i<5; i++){
        cout<<*p<<endl;
        p++; 
    }

    return 0;
}