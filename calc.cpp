
#include <iostream>
#include <string>
#include<cstdlib> 
#include "dlist.h"
#include <sstream>

using namespace std;

  int main(){
      Dlist<double> stack;
      string str;
      // cout << "Enter the number" << endl;

      while(str != "q"){
        cin >> str;
        

        if(str == "+" && !stack.IsEmpty()){
         double a, b,c;
          a = stack.RemoveFront();
          if(stack.IsEmpty()){
            cout << "Not enough operands" << endl;
            stack.InsertFront(a);
          }else{
            b = stack.RemoveFront();
            c = a + b;
            //cout << c << endl;
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
            //cout << c << endl;
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
            //cout << c << endl;
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
            //cout << c << endl;
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
               // std::cout << "Inside of while" << "\n";
                stack.RemoveFront(); // Getting Segmentation Fault HERE
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
          


        }else if(isdigit(str[0])){ // check if its a number
          double d;
          d = atof(str.c_str());
          //cout << str << endl;
          stack.InsertFront(d);
          // cout << "THIS is d: " << d << endl;
          
        } else if(str == "n"){
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
  