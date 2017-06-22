/*
 * Mark Bouchett
 */
#include "MyStack.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;

/**
 * constructor
 */
MyStack::MyStack(){
    size = 0;
}

/**
 * Pushes an char on to the stack
 * increments size
 * @param c
 */
void MyStack::push(char c){
    s.push(c);
    size ++;
}

/**
 * pops a char off the top of the stack
 * decrements size
 */
void MyStack::pop(){
    if(!s.empty()){
        s.pop();
        size--;
    }else{
        cout << "Stack is empty";
    }
}

/**
 * checks to see if the brackets are bin balance opened to closed
 * ** empties the stack!
 * @return 
 */
bool MyStack::balanced(){
   
    while(!s.empty()){
        // put opening brackets on to the bracket stack (q)
        if(s.top() == '}') q.push(s.top());
        if(s.top() == ']') q.push(s.top());
        if(s.top() == ')') q.push(s.top());
        
        // check to see if closing brackets are matched on the stack 
        // if matched pop the bracket stack else return false (not balanced)
        if(s.top() == '['){
            if(q.empty()){
                MyStack::clear();
                return false;               
            }
            if(q.top() != ']'){
                MyStack::clear();
                return false;   
            }
            
            q.pop();
        }
 
        if(s.top() == '{'){
            if(q.empty()){
                MyStack::clear();
                return false;               
            }
            if(q.top() != '}'){
                MyStack::clear();
                return false;   
            }
            
            q.pop();
        }
        
        if(s.top() == '('){
            if(q.empty()){
                MyStack::clear();
                return false;               
            }
            if(q.top() != ')'){
                MyStack::clear();
                return false;   
            }
            
            q.pop();
        }        
        
        s.pop(); // pop character off the stack
    }
    // if all characters pop with no dangling opens return true(in balance)
    return true;
}

/**
 * echos our the stack
 * **empties the stack!
 */
void MyStack::toString(){
    //print and clear the stack
    cout << "\n";
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }
    cout << "\n";    
    size = 0;
}

/**
 * this empties the stack
 */
void MyStack::clear(){
    //clear the stack
    while(!s.empty()){
        s.pop();
    } 
    size = 0;
}
