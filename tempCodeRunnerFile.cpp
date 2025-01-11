
int main(){
    int a , p=1;
    cout << "Enter a number: ";
    cin >> a;
    
    
    for(int i =0 ; i<4 ; i++){
 cout << "Enter a number: ";
        p = p*a;
        
        cin >>a;
       
    }

    cout << "product is : "<< p;
}