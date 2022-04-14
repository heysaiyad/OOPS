#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<endl<<"Printing inside the function"<<endl;

    // updating array's first element
    arr[0] = 100;

    // printing the array 
    cout<<endl<<"Printing in main function"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;


    cout<<"Going back to main funtion"<<endl;
}
int main(){
    int arr[3] = {23, 54, 42};
    update(arr, 3);


    // printing the array 
    cout<<endl<<"Printing in main function"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}