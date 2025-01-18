#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    
    string s;
    getline(cin,s);

   string r;
   
    for(int i=0 ; i<s.length() ; i++){
        for(int j=i+1; j < s.length() ; j++){
        if(s[j] == s[i]){
           r = s[j];
           cout << r<<"    is the first repeating character ";
         return 0;
        }
          }
     
    }
 

}
