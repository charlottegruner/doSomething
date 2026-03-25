#include <iostream>
using namespace std;

int doSomething(int&, int&);

int doSomething(int*, int*);

int main()
{
    int a = 5;
    int b = 6;
    
    int c = doSomething(a, b);
    cout << a << "  "  << b << endl;
    
    a = 5;
    b = 6;
    
    int* xptr = nullptr;
    int* yptr = nullptr;
    *xptr = a;  
    yptr = &b;
    c = doSomething(xptr, yptr);
    cout << a << " " << b << endl;
    
    return 0;
}

int doSomething(int &x, int &y)
{
    cout << "Reference version of doSomething" << endl; 
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}

int doSomething(int* xptr, int* yptr) 
{
    cout << "Pointer version of doSomething" << endl;
    int temp = *xptr;
    *xptr = *yptr * 10; 
    *yptr = temp * 10; 
    return *xptr + *yptr; 
}