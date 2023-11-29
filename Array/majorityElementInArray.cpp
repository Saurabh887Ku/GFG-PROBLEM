/*
Majority Element

Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element). 

Examples : 

Input : A[]={3, 3, 4, 2, 4, 4, 2, 4, 4}
Output : 4
Explanation: The frequency of 4 is 5 which is greater than the half of the size of the array size. 

Input : A[] = {3, 3, 4, 2, 4, 4, 2, 4}
Output : No Majority Element
Explanation: There is no element whose frequency is greater than the half of the size of the array size.
*/
// C++ Program to find the majority element in the given array 
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

void majorityElement(int *arr, int size){
    unordered_map<int,int>um;
    for(int i=0; i<size; i++){
        um[arr[i]]++;
    }
    int count=0;
    for(auto i:um){
        if(i.second>size/2){
            cout<<i.first;
            count=1;
        }
    }
    if(count==0){
        cout<<"No majority element in the given array";
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array : \n";
    cin>>size;
    int *arr=new int[size];
    cout<<"Enter the elements in the array : \n";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    majorityElement(arr,size);
    return 0;
}
