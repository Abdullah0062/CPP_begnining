// Online C++ compiler to run C++ program online
#include <iostream>
#include<array>
#include <algorithm>
using namespace std;

array<float,20> fun(array<float,20>a){
array<float,10>c;
array<float,10>d;
int i=0;
while (i<10){
c[i]=a[i];
i++;
}
int u=0;

while(i<20){
d[u] = a[i];
i++;
u++;}

sort(c.begin(), c.end());
sort(d.begin(), d.end());
cout << "First half of the array: ";
for(int fi=0;fi<10;fi++){
    cout << c[fi]<<" ";
}
cout << endl<<endl<<endl;;
for(int fi=0;fi<10;fi++){
    cout << d[fi]<<" ";
}
cout << endl<<endl<<endl;
array<float,20>mer;
merge(c.begin(), c.end() , d.begin(), d.end() , mer.begin());

return mer;
}

int main() {
    array<float,20>a={12,20,43,13,54,23,65,86,34,96,76,45,21,65,36,87,78,45,91,98};
    
    array<float,20>final = fun(a);
    cout << "Sorted array"<<endl;
    for(int i =0;i<20;i++){
        cout << final[i]<<" ";
    }
    

    return 0;
}