#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    
    string s;
    getline(cin,s);
   bool r;
    for(int i=0 ,j= s.length()-1 ; i<j ; i++ , j--){
        if(s[i]== s[j]){
            r = true;
        }
       else{
       r = false;
       }
    }
 

if(r){
    cout << "yes";

}
else{
    cout <<"No";
}
}
