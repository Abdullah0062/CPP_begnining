#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main(){
    ifstream file("s_t_big_char.txt");
    ofstream file1("Output_s_t_big_char.txt");
    char c;
     c= file.get();
    while(!file.eof()){
       
        if(c >= 'a'&& c <='z'){
            c = c -'a' + 'A';
           
        }
         file1 << c ;
         c= file.get();
    }
    cout <<  "File processed successfully ";
    file1 <<endl<<  "File processed successfully";

    file.close();
    file1.close();
}
