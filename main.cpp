

// #include <iostream>
// #include <string>
// #include<cstdlib> 
// #include "dlist.h"
// #include <sstream>

// using namespace std;

// bool isOperator(const string& input);
// void performOp( string& input, Dlist<int> RPN);

// bool isOperator(const string& input){
//   string ops[] = {"-", "+", "*", "/"};

//   for(int i = 0; i < 4; i++){
//     if(input == ops[i]){
//       return true;
//     }
//   }
//   return false;
// }

// void performOp( string& input, Dlist<int> RPN){
//   int lVal, rVal, result;
//   rVal = RPN.RemoveFront();
//   RPN.RemoveFront();

//   lVal = RPN.RemoveFront();
//   RPN.RemoveFront();

//   if(input == "-"){
//     result = lVal - rVal;
//   }else if(input == "+"){
//     result = lVal + rVal;
//   }else if(input == "*"){
//     result = lVal * rVal;
//   }else{
//     result = lVal / rVal;
//   }
//   cout << result << endl;
//   RPN.InsertFront(result);
// }

// bool isOperator(const string& input)
// {
//     string ops[] = {"+", "-", "*", "/"};
//     for(int i = 0; i < 4; i++)
//     {
//         if(input == ops[i])
//         {
//             return true;
//         }
//     }
//     return false;
// }


// void performOp(const string& input, SLLNode& stack)
// {
//     double fVal, sVal;
//     int errorCheck = 0;

//     sVal = stack.popVal();
//     fVal = stack.popVal();

//     if(input == "+")
//     {
//         stack.pushVal(fVal + sVal);
//     }
//     else if(input == "-")
//     {
//         stack.pushVal(fVal - sVal);
//     }
//     else if(input == "*")
//     {
//         stack.pushVal(fVal * sVal);
//     }
//     else if(input == "/" && sVal != 0)
//     {
//         stack.pushVal(fVal / sVal);
//     }


//     if(input == "/" && sVal == 0)
//     {
//         cout << "Error: Division by zero" << endl;
//         errorCheck = 1;
//     }

//     if(errorCheck == 0)
//     {
//     stack.print();
//     }
// }