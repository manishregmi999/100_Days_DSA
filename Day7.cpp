#include<iostream>
using namespace std;
int main(){
    //long long int = 8 bytes
    long long int x=5;
    cout<<sizeof(x)<<endl;
    //unsigned int
    unsigned int p = -10; // Since -10 is negative so compiler converted it into 2's compliment and stores it but when retriving value it didnot deleted that MSB since it is unsigned and showed the value with MSB by changing that into decimal. Simple!!
    cout<<p;
}

//Arrays
#include<iostream>
using namespace std;
int main(){

    //To cretae an array of fixed size
    int hello[5];// This just creates an array of size 5. name of array is hello. Garebage values inside.

    //To create array + initialize it with values.
    int marks[5]={99, 100, 54, 77, 90};// Here we create array of size 5 and store all these values inside

    //To create array with size same as how much data we stored
    int hi[]={1, 2, 3};//This is an array with size 3 since we added 3 integers inside
    int helloo[]={14, 62, 37, 74, 58, 46};//This array has size 6 since 6 integers are stored

    //To access data inside array

    cout<<marks[0]<<endl;// This prints the value stored at the 0th index (first element) of the array marks. 
    cout<<marks[1]<<endl;//Since array stores data from 0. This is the main reason why we initialize loops with int i=0. "To print array from 0th index."
    cout<<marks[2]<<endl;
   
    //To calculate size of array
    //cout<<sizeof(marks);//This will give how much bytes does this array occupies. for eg : if integer array has size 5 and we know each integer occupies size of 4 bytes. We can divide the size of array by 4 to get the size of array.
    //cout<<sizeof(marks)/sizeof(int);// output: 5. So we know that marks array can store 5 integer value or its has size 5. Since we don't know how much size does array take, because it is dependent upon machine, so we can put sizeof(int) so we exactly divide it by size of 1 integer. 

    //Way to print all data from array
    int size= sizeof(marks)/sizeof(int);
    for(int i=0; i<size; i++){
        cout<<marks[i]<<endl;
    }

    // Q1. WAP to take size of array, and to take elements of array and print it.
    int size1;
    cout<<"Enter size of array"<<endl;
    cin>>size1;

    int my_array[size1];
    cout<<"Enter "<<size1<<" elements"<<endl;
    for(int i=0; i<size1; i++){
        cin>>my_array[i];
    }
    cout<<"Data from array"<<endl;
    for(int i=0; i<size1; i++){
        cout<<my_array[i]<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    //Q2. WAP to find Smallest number and Largest number in an array.
    int my_array[]={22,4, 5, 7, 2, 6, 88, 77, 99, 1, 656, 50};
    int smallest=INT_MAX;// Its like saying +infinity. Largest value of integer. So when we compare it with other numbers, this can never be smaller, which will help us find smallest one.
    int largest=INT_MIN;//Its like saying -infinity
    int size = sizeof(my_array)/sizeof(int);

  for(int i=0; i<size; i++){
        if(smallest>my_array[i]){
            smallest=my_array[i];
        }

        if(largest<my_array[i]){
            largest=my_array[i];
        }
    }
    cout<<"Smallest number is : "<<smallest<<endl;
    cout<<"Largest number is : "<<largest<<endl;




//More easy way to find the smallest and largest number is by using min() function

for(int i=0; i<size; i++){
    
   smallest= min(my_array[i], smallest);
   largest=max(my_array[i], largest);
   
}
 cout<<"Smallest : "<<smallest<<endl;
 cout<<"Largest : "<<largest<<endl;

//WAP to find out index at which maximum element lies in an array.
int maxIndex=0;
for (int i=1; i<size; i++){
    if(my_array[i]>my_array[maxIndex]){
        maxIndex=i;
    }
}
 cout<<"Max value is at index "<<maxIndex;
}



 //Pass By Reference
 #include<iostream>
 using namespace std;
 void change_array(int arr[], int size){
    cout<<"function called here"<<endl;
    for(int i=0; i<size; i++){
    arr[i] = 2 * arr[i];
    
} 
}
 int main(){

//Notes:
//If we pass array as parameter, it is always pass as pass by reference, i.e. original array is passed, not the copy.
int array[]={1, 2, 3, 4};
int size=4;
cout<<"Before call In main"<<endl;
for(int i=0; i<size; i++){
cout<<array[i]<<endl;
}
change_array(array, size);
cout<<"after call in main()"<<endl;
for(int i=0; i<size; i++){
cout<<array[i]<<endl;
}

}

