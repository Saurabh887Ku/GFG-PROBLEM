# Program to find sum of elements in a given array

Given an array of integers, find the sum of its elements.

Examples:

Input : arr[] = {1, 2, 3}
Output : 6
Explanation: 1 + 2 + 3 = 6

Input : arr[] = {15, 12, 13, 10}
Output : 50
#

//Program to find the sum of the array element
#include<iostream>
using namespace std;

int sumOfElement(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
		int size;
    cout<<"Enter the size of the array : \n";
    cin>>size;

    int arr[size];
    cout<<"Enter the size of the element : \n";
    for(int i=0; i<size; i++){
        cin>>FirstArray[i];
    }
    cout<<"The sum of the array elements are : "<<sumOfElement(arr,size);
    return 0;
}
