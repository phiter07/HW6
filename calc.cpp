/***
*PSEUDOCODE
Dlist stack:
string str;

while str is not equal to q
get input from str

if str is equal to + AND stack.isEmpty is not empty {
  double a, b, c,
  a assigned stack.RemoveFront();
  if (stack.IsEmpty()) {
    call function stack.InsertFront(a);
  }
  else {
    b assigned stack.RemoveFront();
    c assigned a + b;
    call function stack.InsertFront(c);
  }
}
  else if (string is equal to - && not stack.isEmpty()) {
    double a, b, c;

    a assigned stack.RemoveFront();
    if(stack.isEmpty()) {
      call function stack.InsertFront(a);
    }
    else{
      b assigned stack.RemoveFront
      c assigned b - a;
      call function stack.InsertFront(c);
    }
  }
  
  else if (string is equal to * AND not stack.isEmpty()) {
    double a, b, c;

    a assigned stack.RemoveFront();
    if(stack.isEmpty()) {
      call function stack.InsertFront(a);
    }
    else {
      b assigned stack.RemoveFront();
      c assigned a * b
      call function stack.InsertFront(c);
    }
  }

    else if (string is equal to / AND not stack.isEmpty()) {
    double a, b, c;

    a assigned stack.RemoveFront();
    if(stack.isEmpty()) {
      call function stack.InsertFront(a);
    }
    else {
      b assigned stack.RemoveFront();
      c assigned a / b
      call function stack.InsertFront(c);
    }
  }
  else if (string is equal to d AND not stack.isEmpty()) {
    double a
    a assigned stack.RemoveFront();
    call function stack.InsertFront(a);
    call function stack.InsertFront(a);
  }
  else if (string is equal to r AND not stack.isEmpty()) {
    double a assigned stack.RemovalFront();
    if stack.isEmpty()) {
      call function stack.InsertFront(a);
    }
    else
    double b assigned stack.RemoveFront();
    call function stack.InsertFront(a);
    call function stack.InsertFront(b);
  }
  else if (string is equal to p AND not stack.isEmpty()) {
    double temp assigned stack.RemoveFront();
    call function stack.InsertFront(temp);
  }
  else if(string is equal to c) {
    while(not stack.IsEmpty() ) {
      call function stack.RemoveFront();
    }
  }
  else if (string is equal to a) {
    Dlist<double> temp assigned stack;
    while (not temp.IsEmpty()){
      double x assigned temp.RemoveFront();
      if(not temp.IsEmpty()) {
        output x
      }
      else
      output x
    }
  }
  else if(isdigit(str[0])) {
    double d 
    d is assigned atof())
    call function stack.InsertFront(d);
  }
  else if (str is equal to n) {
    double a,b,c;
    a assigned stack.RemoveFront();
    if(stack.IsEmpty()) {
      call function stack.InsertFront(a);
    }
    else {
      c is assigned -1 multiply a;
      output c
      call function stack.InsertFront(c)
    }
  }
  else if (str is equal to q)
  break
***/

#include <iostream>
#include <string>
#include <cstdlib> 
#include "dlist.h"
#include <sstream>

using namespace std;

int main(){
      Dlist<double> stack;
      string str;
      while(str != "q"){
        cin >> str;
        
        if(str == "+" && !stack.IsEmpty()){
         double a, b,c;
          a = stack.RemoveFront();
          if(stack.IsEmpty()){
            cout << "Not enough operands" << endl;
            stack.InsertFront(a);
          }
          else {
            b = stack.RemoveFront();
            c = a + b;
            stack.InsertFront(c);
          }    
        }else if(str == "-" && !stack.IsEmpty()){
          double a, b,c;

          a = stack.RemoveFront();
          if(stack.IsEmpty()){
            cout << "Not enough operands" << endl;
            stack.InsertFront(a);
          }else{
            b = stack.RemoveFront();
            c = b - a;
            stack.InsertFront(c);
          }    
          
        }else if(str == "*" && !stack.IsEmpty()){
          double a, b,c;

          a = stack.RemoveFront();
          if(stack.IsEmpty()){
            cout << "Not enough operands" << endl;
            stack.InsertFront(a);
          }else{
            b = stack.RemoveFront();
            c = a * b;
            stack.InsertFront(c);
          }    
          
        }else if(str == "/" && !stack.IsEmpty()){
          double a, b,c;

          a = stack.RemoveFront();
          if(stack.IsEmpty()){
            cout << "Not enough operands" << endl;
            stack.InsertFront(a);
          }else{
            b = stack.RemoveFront();
            c = b / a;
            stack.InsertFront(c);
          }    
          
        }else if(str == "d" && !stack.IsEmpty()){
          double a;
          a = stack.RemoveFront();
            stack.InsertFront(a);
            stack.InsertFront(a);

        }else if(str == "r" && !stack.IsEmpty()){
          double a = stack.RemoveFront();   
          if(stack.IsEmpty()){
            cout << "Not enough operands" << endl;
            stack.InsertFront(a);
          }else{
            double b = stack.RemoveFront();
            stack.InsertFront(a);
            stack.InsertFront(b);
          }       
        }else if(str == "p" && !stack.IsEmpty()){
          double temp = stack.RemoveFront();
          cout << temp  << endl;
          stack.InsertFront(temp);
          
        }else if(str == "c"){
            while (!stack.IsEmpty() ) {
                stack.RemoveFront(); 
            }
          
        }else if(str == "a"){
          Dlist<double> temp = stack;
          while(!temp.IsEmpty()){
            double x = temp.RemoveFront();
            //cout << endl;
            if(!temp.IsEmpty()){
              cout << x << " ";
            }else{
              cout << x << endl;
            }
          }
          
        }
        else if(isdigit(str[0])){
          double d;
          d = atof(str.c_str());
          stack.InsertFront(d); 
        }
        else if(str == "n"){
          double a, b,c;
          a = stack.RemoveFront();
          if(stack.IsEmpty()){
            cout << "Not enough operands" << endl;
            stack.InsertFront(a);
          }else{
            c = -1 * a;
            cout << c << endl;
            stack.InsertFront(c);
          }    
        }else if(str == "q"){
          break;
        }
        else{
          cout << "Entet valid input" << endl;
        }
      }
  }
  