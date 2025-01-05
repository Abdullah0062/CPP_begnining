#include <iostream>

using namespace std;

int adi(int* a , int* b){
    return (*a)+(*b);
}


int sub(int* a , int* b){
    return (*a)-(*b);
}


int mul(int* a , int* b){
    return (*a)*(*b);
}


int div(int* a , int* b){
    return (*a)/(*b);
}


int main(){

 int a =10 , b = 5;

 cout << "Result of Addition using pointers: "<<adi(&a,&b)<< endl;
 cout << "Result of Subtraction using pointers: "<<sub(&a,&b)<< endl;
 cout << "Result of Multiplication using pointers: "<<mul(&a,&b)<< endl;
 cout << "Result of Division using pointers: "<<div(&a,&b)<< endl;

    return 0;
}