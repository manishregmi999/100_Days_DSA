#include<iostream>
using namespace std;

int main(){
    int a=4, b=8;
    //Bitwise Operator
    
    //Bitwise & (Logical AND)
    cout<<(a&b)<<endl; // 0100 AND 1000 = 0000(0)

    //Bitwise | (Logical OR)
    cout<<(a|b)<<endl; //0100 OR 1000 = 1100 (12)

    //Bitwise ^ (XOR)
    cout<<(a^b)<<endl;

    //Bitwise << (Left Shift Operator)
   
    cout<<(4<<1)<<endl; // 100 << 1(This ! tells shift that binary by 1, so if it was 2 answer will be 10000(16)) = 1000
    cout<<(4<<2)<<endl;

    //Bitwise >> (Right Shift Operator)
    cout<<(8>>2)<<endl; //1000>>2=0010(2)
}