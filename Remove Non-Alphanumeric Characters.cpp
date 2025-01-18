#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    
    string s;
    getline(cin,s);

   string r;
    for(int i=0 ; i<s.length() ; i++){
        if((s[i] >='a' && s[i] <='z') || (s[i] >='A' && s[i] <='Z')){
           r += s[i];
        }
      
    }
 
cout << r;
}
