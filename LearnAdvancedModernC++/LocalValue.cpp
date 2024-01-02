#include <iostream>

using namespace std;

int func(int y){
    cout<< "address of y is " << &y<< endl;
    y = 1;
    return y;
}
int func(int *y){
    cout<< "y is "<< y <<endl;
    return *y+1;
}
int func1(int &y){
    cout<< "address of y is " << &y<< endl;
    y = 1;
    return y;
}
int main(){
    int x = 2;
    cout<< "address of x is " << &x<<endl;
    int z = func1(x);
    //int z = func(&x);
    // int z= func(x);
    cout<< "address of z is " << &z<<endl;
    cout<< "after calling func(),x: " << x<<endl;
    cout<< "after calling func(),x: " << z<<endl;
}