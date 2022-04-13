#include<iostream>
using namespace std;
//  HOld
//  void printArray(int arra[], int size){
    void printArray(char arra[], char size){
         cout<<"Printing the array"<<endl;
    // print the array

    for (int i = 0; i < size; i++)
    {
        cout<<arra[i]<<" ";
    }
    cout<<"Printing done"<<endl;

    }

int main(){
    // int array[23];

//     // Accessing an element 
//     cout<<"Value at 11 index " <<array[11]<<endl;

//     //  cout<<"Value at 22 index " <<array[22]<<endl;   // Not Acceptable 
//     cout<<"How are you"<<endl;


//     // initializing an array 
//     int arr[5]=  {4, 5,23, 34, 343} ;

//     // Accessing an element
//     cout<<"value at 3 index "<<arr[3]<<endl;


//     int num[20]= {34, 23, 35};

//     int n = 20;
//     cout<<"Printing the array"<<endl;
//     // print the array 

//     for (int i = 0; i < n; i++)
//     {
//         cout<<num[i]<<" ";
//     }



//     // initilizing all with zero
//     int number[20]={0};

//      n = 20;
//     cout<<"Printing the array"<<endl;
//     // print the array

//     for (int i = 0; i < n; i++)
//     {
//         cout<<number[i]<<" ";
//     }


// // initilizing all with  1 [Not possible with b elow line]
//     int ali[20]={1};

//      n = 20;
//     cout<<"Printing the array"<<endl;
//     // print the array

//     for (int i = 0; i < n; i++)
//     {
//         cout<<ali[i]<<" ";
//     }


//****************😀
int third[10]={12, 5};
int n =10;
// printArray(third, 10);     
int thirdSize = sizeof(third)/sizeof(int);
cout<<"Size of third is: "<<thirdSize<<endl;

//************************
char ch[6]={'a', 'b', 'c', 'd', 'e', 'f'};
cout<<ch[3];

// printArray(ch, 6);     



    
}

