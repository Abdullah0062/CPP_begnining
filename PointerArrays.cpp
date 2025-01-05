#include <iostream>

using namespace std;
int main(){

    int* ptr = new int[10];
    for(int i=0; i<10;i++){
        cin >> ptr[i];
    }


    int sum =0;
     for(int i=0; i<10;i++){
        sum +=ptr[i];
    }
    cout << "sum is: " << sum;
}