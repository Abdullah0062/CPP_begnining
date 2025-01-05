// Online C++ compiler to run C++ program online
#include <iostream>
#include<array>
#include <algorithm>
using namespace std;

void fun(array<float,20>& a){


sort(a.begin(), a.begin()+10);
sort(a.begin()+10, a.end());
cout << "First Sorted Half"<<endl;
for(int i =0; i<10;i++){
    cout << a[i]<< " ";
}

cout << endl<<endl;
cout <<"Second Sorted Half"<<endl;
for(int i =10; i<20;i++){
    cout << a[i]<< " ";
}
cout << endl<<endl;
cout <<"Final Array"<<endl;
array<float,20>mer;
merge(a.begin(), a.begin()+10, a.begin()+10, a.end() , mer.begin());

for(int i =0; i<20;i++){
    a[i] = mer[i];
}
for(int i =0; i<20;i++){
    cout << a[i]<<" ";
}
}

int main() {
    array<float,20>a={12,20,43,13,54,23,65,86,34,96,76,45,21,65,36,87,78,45,91,98};
    
    fun(a);
    
    

    return 0;
}