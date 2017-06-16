/* 
 * File:   main.cpp
 * Author: Mark Bouchett
 * SDEV-345-81: Data Structures & Algorithms 
 *
 * Created on June 03, 2017
 * this program tests the MyStack (bracket balancing stack)
 */

#include <iostream>
#include <stack>
#include "MyStack.h"

using namespace std;

int driveMyStack();
void checkBalance(MyStack);

/*
 * 
 */
int main() {
    driveMyStack();
    
    return 0;
}

int driveMyStack(){
    const int cSIZE = 20;
    const int dSIZE = 21;
    char c[cSIZE] = {'{', 'a', 'b', 'c', 'd', '(', '[', '1', '2', '3', ']', 'x', 'x', 'x', 'x', 'x', 'x', ')', '}'};
    char d[dSIZE] = {'[', 'd', 'j', 'd', 'j', 'd', '{', '1', '2', '3', '}', '(', '(', 'd', 'e', 'a', 'a', ')', ')', ')'};
    
    MyStack stack;                  // instantiate MyStack
    
    cout << c << endl;              // display char array c
    for(int i = 0; i < cSIZE; i++)  // put the chars from array c on the stack
        stack.push(c[i]);  
    
    checkBalance(stack);            // see if the brackets are balanced
    stack.clear();                  // clear the stack
    
    cout << endl;                   // insert a blank line
    
    cout << d << endl;              // display char array c
    for(int i = 0; i < cSIZE; i++)  // put the chars from array c on the stack
        stack.push(d[i]);  
    
    checkBalance(stack);            // see if the brackets are balanced
    stack.clear();                  // clear the stack    
}

/**
 * check and display the status of the stack
 * @param ms
 */
void checkBalance(MyStack ms){
    if(ms.balanced())
        cout << "all balanced\n";
    else
        cout << "out of balance\n";      
}