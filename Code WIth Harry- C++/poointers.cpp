#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    a = 1;
    int *p = &a;
    cout << "The value of a is " << *p << endl;
    int *ptr = new int(40);
    cout << "The second value is " << *ptr << endl;
    int *arr = new int[3];
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 4;
    cout << "The value in ARR is " << arr[0] << endl;
    cout << "The value in ARR is " << arr[1] << endl;
    cout << "The value in ARR is " << arr[2] << endl;

    return 0;
}