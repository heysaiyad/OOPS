#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int s= 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e  = mid -1;

        }
         
        else if (key>arr[mid])  // Right me jao
        {
            s = mid +1;
        }

        else if (key< arr[mid])   // Lef tme jao
        {
            e = mid -1;
        }
        
        mid = s + (e-s)/2;

        
        
    }
    return ans;
}



    int lastOcc(int arr[], int n, int key){
    int s= 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;

        }
         
        else if (key>arr[mid])  // Right me jao
        {
            s = mid +1;
        }

        else if (key< arr[mid])   // Lef tme jao
        {
            e = mid -1;
        }
        
        mid = s + (e-s)/2;

        
        
    }
    return ans;

    




}
int main(){

    int even[5]= {2, 4, 6, 6, 9};

     cout<<"First occurance of 6 is at index  "<<firstOcc(even, 5, 6)<<endl;
     cout<<"Last occurance of 6 is at index  "<<lastOcc(even, 5, 6);
}