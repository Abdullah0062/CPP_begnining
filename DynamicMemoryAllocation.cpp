#include <iostream>

using namespace std;

void inpt(int* arr){
    for(int i =0; i<5 ; i ++){
    cout << "Enter the value for " << i+1<< ": ";
    cin >> arr[i];

    }
}


void suma(int* arr , int *s){
   
    for(int i =0; i<5;i++){
        *s = *s+ arr[i];
    }
    cout << *s << endl;
}


void avr(int* arr , int *s){
    
    cout << (*s)/5<< endl;
}
int main(){

 

int* ptr =  new int[10];
 int *s= new int(0);
inpt(ptr);

for(int i =0; i<5;i++){
    cout << *(ptr+i)<< " ";

}
cout << endl;

suma(ptr , s);
avr(ptr , s);

    return 0;
}