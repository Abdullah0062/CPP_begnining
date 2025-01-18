#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    
    string s;
    getline(cin,s);

   string r;
   
    for(int i=0 ; i<s.length() ; i++){
        s[i] = ('z')-(s[i] - 'a') ;
          }
     

     cout << s;
    }
 


