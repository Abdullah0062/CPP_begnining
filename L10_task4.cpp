// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<array>
using namespace std;
void fun(array<float,12>a){
    float l= a[11];
   int s=0;
   int h =11;
    int i =0;
    while(i<12){
        if(a[i]<l){
            swap(a[i],a[s]);
            s++;
            i++;
        }
        else if(a[i> l]){
            swap(a[i], a[h]);
            h--;
        }
        i++;
    }
    int c=0;
    while(c<12){
        cout << a[c]<<"  ";
        c++;
    }
   
}
int main() {
  array<float,12>a ={23, 54, 12, 19, 67, 9, 45, 32, 90, 58, 19, 48};
  fun(a);
    return 0;
}
