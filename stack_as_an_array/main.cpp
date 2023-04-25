// Implementing stack as an array

#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <algorithm>

using namespace std;
using namespace std::chrono;

const int n=100;
int top=-1;
int arr_stack[n];

void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      arr_stack[top]=val;
   }
}

void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< arr_stack[top] <<endl;
      top--;
   }
}

void isEmpty(){
   if (top<=-1){
       cout<<"Stack is empty"<<endl;
   }else{
       cout<<"Stack is not empty"<<endl;
   }
}

void isFull(){
   if (top>=n){
       cout<<"Stack is full"<<endl;
   }else{
       cout<<"Stack is not not full"<<endl;
   }
}

void stackTop(){
    if(top>-1){
        cout<<"The top element of the stack is "<<arr_stack[top]<<endl;
    }else{cout<<"Stack is empty"<<endl;}
}

void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--){
      cout<<arr_stack[i]<<" ";}
      cout<<endl;
   } else
   cout<<"Stack is empty";
}

int main() {
    cout<<"Implementing a stack as an array"<<endl;

    auto start_time = high_resolution_clock::now();


    push(8);push(10);push(5);push(11);push(15);
    push(23);push(6);push(18);push(20);push(17);
    display();
    pop();pop();pop();pop();pop();
    display();
    push(4);push(30);push(3);push(1);
    display();

    auto end_time = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end_time - start_time);
    cout << "Time taken : " << duration.count() << " nanoseconds" << endl;

    return 0;
}
