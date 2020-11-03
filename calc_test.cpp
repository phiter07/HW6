/*
#include <iostream>
#include <string>
#include <iostream>
#include "dlist.h"
#include <sstream>

using namespace std;


 int main(){
   Dlist<int> RPN; 
   string input;

   while(true){
     cout << "Enter input" << endl;

     cin >> input;

     int num;

     if(istringstream(input) >> num){
       RPN.InsertFront(num);
     }
    else if(isOperator(input)){
       performOp(input, RPN);
     }
     else if(input == "q"){
       return 0;
     }
     else{
       cout << "Invaild Operator" << endl;
     }
   }
 }
 
 std::cout << "::::::::::::::::RPN CALCULATOR:::::::::::::::::" << endl;
     cout << "::TYPE IN A POSTFIX EXPRESSION OR 'q' TO QUIT::" << endl;
     cout << ":::::::::::::::::::::::::::::::::::::::::::::::" << endl << endl;
*/