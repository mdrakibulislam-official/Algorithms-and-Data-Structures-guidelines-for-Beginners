#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;

    cout<<*&a<<endl;
    cout<<&ptr<<endl;

    char ch = 'A';

    char* c = &ch;
    float* f;
    cout<<*c<<" "<<f<<endl;

    int arr[5] = {10,20,30,40,50};
    int *p = arr;
    cout<<*p<<endl;
    cout<<*(p+4)<<endl;

    int b = 10; 
    int *pp = &b;
    int **ppp = &p;

    cout<<**ppp<<endl;

    int *d = new int;
    *d = 50;
    cout<<*d<<endl;
    delete d;

    int* range = new int[5];
    delete[] range;
    cout<<range<<endl;
}