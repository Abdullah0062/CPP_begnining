#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    
    string s;
    getline(cin,s);
    for(int i=0; i<s.length() ; i++){
        cout << s[i] << ":" << int(s[i]) << " , ";
    }


}
