/* Write a function that accepts an array<float, 12> as parameter and return same type array 
with rearranged values as described below. Later, develop and verify its working for a few 
test cases. 
Select the last element in array as a pivot, using logic (sequence of CPP statements, including variable 
assignments, loops and conditions) place it at its position if the array is sorted. Also, array elements 
before it should be less than or equal to it, and array elements after it should be greater than it. The 
elements in the rearranged array are not required to be sorted. The catch is to complete this task with 
simpler logic than sorting logic. You may use several arrays to complete this task. 
parameter array: 23, 54, 12, 19, 67, 9, 45, 32, 90, 58, 19, 48 
one possible return array: 23, 12, 19, 9, 45, 32, 19, 48, 54, 67, 90, 58 */
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
