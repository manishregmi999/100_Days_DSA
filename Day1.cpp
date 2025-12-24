// Learned about basic things like revised older concepts like datatypes variables tyope scasting ioperators
//Typecasting
#include<iostream>
using namespace std;

int main(){
    //Conversion (Implicit) here character datatype is changed into integer since char is smaller than integer so it is implicitely done by compliler and its easy to do as well.
    char grade = 'A';
    int value = grade;
    cout<<value<<endl;

    //Type Casting (Explicit)
    double a=500.99;
    // int new_a= a;// even thpugh this code runs we should not use it since it might throw error if compiler is stricter 
    int new_a = (int) a;// this is explicitely done since we programmers changed it from doubnle to int using (int) a; 
    cout<<new_a;

    //One usecase of type casting is when we divide integer by integer but want float as answer
    cout<<5/2<<endl; //gives 2
    cout<<5/(double)2; //gives 2.5, here 2 is typecasted from int to double
// Another thing to remember is dividing or multiplying 2 numbers with different data type gives a result in a datatype largest among those 2 datatypes. for eg if i divide integrs by float or float by integer answer will come as float since float is bigger than integer.

//Operators
//Arithmetic operators : +, -, *, /, %
//Relational operator : ==, <=, >=, >, <, !=
//Logical operators : &&, ||, ! 
cout<<(5>3);// 1 true
cout<<(5<3);// 0 false

// Sum of 2 numbers
int a, b;
cout<<"Enter a";
cin>>a;
cout<<"Enter b";
cin>>b;
cout<<"Sum: "<<a+b;

//Unary operator
int a=5, b=6;
cout<<a--<<endl;// here first 5 will get printed, then a will be incremented
cout<<++b;//here b will first get incremented, then b will be printed as b+1 which is 7


}