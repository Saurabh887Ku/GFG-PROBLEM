/*
Program to find largest element in an Array
Read
Discuss
Courses
Practice
Video
Given an array arr[] of size N, the task is to find the largest element in the given array. 

Examples: 

Input: arr[] = {10, 20, 4}
Output: 20
Explanation: Among 10, 20 and 4, 20 is the largest. 

Input : arr[] = {20, 10, 20, 4, 100}
Output : 100
*/

// Program to find the largest element in the array 
#include<iostream>
using namespace std;
int largestElement(int arr[], int size){
    int largest=arr[0];//initialize first element is the largest element
    for(int i=1; i<size; i++){
        if(arr[i]>largest){//check if the next array element is largest then update the value of the largest 
            largest=arr[i];
        }
    }
    return largest; //after that return the largest value 
}
int main(){
    int size;
    cout<<"Enter the size of the array :";
    cin>>size;
    // For taking input of the array.
     int arr[size];
    cout<<"Enter the array element :";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    // Calling to a function and printing the largest element in the array.
    cout<<largestElement(arr,size);
    return 0;
}
