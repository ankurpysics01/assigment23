//10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Enter the 10 value in array:-"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<10;i++){
       sum=sum+arr[i];
    }
    cout<<"the sum of all the element is "<<sum<<endl;
    return 0;

}