//Conversion of Decimaln to Binary Number System
#include<iostream>
#include<cmath>
using namespace std;
    int convert(int num){
        int ans=0;
        int power=0;
        int decNum=num;
        while(decNum>0){
        int rem=decNum%2;
        ans=ans+rem*(int)pow(10, power);// its good to change power into integer since power function returns double vlue
        decNum=decNum/2;
        power++;
    }
    return ans;
}
int main(){
    int num, n;
  for(int i=0; i<10; i++){
     cout<<convert(i)<<endl;

  }
}

//Conversion of Decimal to binary
int convertDecimaltoBinary(int Bin){
    int Binary = Bin;
    int ans = 0; // Decimal
    int rem;
    int power=0;
    while(Binary>0){
        rem=Binary%10;
        ans=ans+ rem*pow(2, power);
        power++;
        Binary = Binary/10;
        
    }
    return ans;


}
int main(){
    cout<<convertDecimaltoBinary(101010);
}