//9. Write a C++ program to find the maximum of two numbers
#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"enter the value of x:-";
    cin>>x;
    cout<<"enter the value of y:-";
    cin>>y;
    if(x>y){
        cout<<"x is bigger than y"<<endl;
    }
    else if(y>x){
        cout<<"y is bigger than y"<<endl;
    }
    else{
        cout<<"x and y is equal "<<endl;
    }
    return 0;
}