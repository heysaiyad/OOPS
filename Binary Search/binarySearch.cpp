#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;


    while (start <= key){
        if (arr[mid]== key) 
        {
            return mid;
        }

        // go to right part

        if (key>arr[mid])
        {
            start = mid+1;
            
        }
        else{
            end = mid - 1;
        }

        mid = (start + end)/2;
        
        
    }

    return -1;
}
    

int main(){
    int even[6] = {2, 4, 8, 12, 14, 18};
    int odd[5]  = {3, 6, 9, 12, 15};

    int evenIndex = binarySearch(even, 6, 12);
    cout<<"Index of 12 is: "<<evenIndex<<endl;


    int oddIndex = binarySearch(odd, 5, 9);
    cout<<"Index of 9 is: "<<oddIndex<<endl;

}