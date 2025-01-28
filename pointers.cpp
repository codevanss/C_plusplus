#include <iostream>
using namespace std;

int main(){
    int a = 34 ; 
    int* ptra ;
    ptra = &a;
    cout<<a;
    cout<<*ptra;
    cout<<ptra;
    cout<<&a;

    return 0 ;
}