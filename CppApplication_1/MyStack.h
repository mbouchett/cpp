/* 
 * File:   MyStack.h
 * Author: mark
 *
 * Created on May 29, 2017, 2:49 PM
 */

#ifndef MYSTACK_H
#define MYSTACK_H

#include <stack>

using std::stack;

class MyStack{
private:
    stack<char> s;
    stack<char> q;
    int size;
public:
    MyStack();
    void push(char c);
    void pop();
    bool balanced();
    void toString();
    void clear();
    
};

#endif /* MYSTACK_H */