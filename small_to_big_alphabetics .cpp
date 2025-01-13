#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(){
    ifstream file("small to big char.txt");
    ofstream file1("Output of small to big.txt");
    char c;
     
    while(!file.eof()){
       file >> c;
        if(c >= 'a'&& c <='z'){
            c = c-'a' + 'A';
            file1 << c << " ";
        }
    }
    cout <<  "File processed successfully ";
    file1 <<endl<<  "File processed successfully";

    file.close();
    file1.close();
}