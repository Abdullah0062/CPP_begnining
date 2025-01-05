// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <array>
#include <cmath>
using namespace std;

struct ratio{
    int num;
    int den;
};
// Input Ratio
ratio inratio(){
    ratio abc;
    cin >> abc.num;
    cin >>abc.den;
    return abc;
}
//Output Ratio
float outratio(ratio abc){
    return  static_cast<float>(abc.num)/(abc.den);
}

//To take additive inverse of a Ration object 
float add_inverse(float a){
    return a *-1;
}

// To take reciprocal of a Ratio object 
ratio reciprocal(ratio a){
    ratio as;
    as.num = a.den;
    as.den = a.num;
    return as;
}
// To multiply two Ratio objects 
float multiply(ratio a , ratio b){
    ratio result;
     float result1;
    result.num = a.num*b.num;
    result.den = a.den*b.den;
    result1 = (result.num)/(result.den);
    
    return result1;
}

// To add an integer with a Ratio object 
float addir(ratio a , int b){
    float result;
    result = static_cast<float>((a.den*b) + (a.num))/(a.den);

    return result;
    }
//To convert an integer into a Ratio object 
ratio int_ratio(int a){
    ratio result;
    result.num = a;
    result.den = 1;
   
    return result;
}

//To convert a Ratio object to a float
float ratio_float(ratio a){
  return static_cast<float>(a.num)/(a.den);
}

//Comparing two Ratio objects for equality
bool equal(ratio a , ratio b){
    bool result = false;
    if (a.num==b.num && a.den==b.den){
        result = true;
    }
    return result;
}
// Comparing two Ratio objects as first is less than second 
bool less1(ratio a , ratio b){
    bool result = false;
    float r1= a.num/a.den;
    float r2 = b.num/b.den;
    if (r1 < r2){
        result = true;
    }
    return result;
}


// MAIN FUNCTION
int main(){
    ratio abc = inratio();
    cout << endl;
     cout << abc.num << "/" << abc.den << " is = " << outratio(abc);
     float a = outratio(abc);

// Additive inverse of the ratio
     cout<<endl << "additive inverse is "<< add_inverse(a);

// To take reciprocal of a Ratio object 
    ratio result = reciprocal(abc);
    cout << endl<< "reciprocal is " << result.num << "/" << result.den;

// To multiply two Ratio objects 
 ratio cba;
    cout <<endl << endl << "Enter another ratio value";
    cin >>cba.num >> cba.den;
    float result1 = multiply(abc,cba);
    cout <<"result of multiplication is "<< result1;



// To add an integer with a Ratio object 
 int a_addir ;
    ratio abc_addir;
    cout << "Enter an integer and a ratio to add  ";
    cin >> a_addir >> abc_addir.num >> abc_addir.den;
    float b_addir = addir(abc_addir , a_addir);
    cout << b_addir;

//To convert an integer into a Ratio object 
int a_int_ratio=4;
    ratio result_int_ratio = int_ratio(a_int_ratio);
    cout << result_int_ratio.num << "/" << result_int_ratio.den;

//To convert a Ratio object to a float 
ratio a_ratio_float;
   cin >> a_ratio_float.num >> a_ratio_float.den;
   cout << ratio_float(a_ratio_float);


//Comparing two Ratio objects for equality
ratio a_equal , b_equal;
  cin >> a_equal.num >> a_equal.den >> b_equal.num >> b_equal.den;
  bool result_equal = equal(a_equal,b_equal);
 if (result_equal == true){
     cout << "Both ratios are equal ";
 }
 if (result_equal != true){
     cout << "not equal";
 }
// Comparing two Ratio objects as first is less than second 
 ratio a_less1 , b_less1;
  cin >> a_less1.num >> a_less1.den >> b_less1.num >> b_less1.den;
  bool result_less1 = less1(a_less1 , b_less1);
 if (result_less1 == true){
     cout << "The first ratio is less than 2nd";
 }
 if (result_less1 != true){
     cout << "The first ratio is not less than 2nd";
 }



     return 0;
}