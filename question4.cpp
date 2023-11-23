//Program to separate  0s and 1s from a given array of values 0 and 1 
#include<iostream>
using namespace std;
 

void separatezeroesones(int arr[], int n)  //passing array and number of elements in the array
{
    int zeroes = 0;  
    
    for (int i = 0; i < n; i++) { //first find and count the number of zeroes
        if (arr[i] == 0)
            zeroes++;
    }
 
   for (int i = 0; i < zeroes; i++) 
        arr[i] = 0;  //fill the places with zeroes
 
   for (int i = zeroes; i < n; i++)
        arr[i] = 1;  //rest fill with one
}
 
int main()
{
    int arr[] = {0, 1, 0, 0 , 1, 1, 1, 0, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
   	cout << "Original array : ";
    for (int i=0; i < n; i++) 
    cout << arr[i] <<" ";
    separatezeroesones(arr, n);
 
    printf("\nArray after dividing : ");
      for (int i=0; i < n; i++) 
      cout << arr[i] <<" ";
        return 0;
}