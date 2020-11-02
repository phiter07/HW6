// #include <iostream>
// #include <string>
// #include <cstdio>
// #include "dlist.h"
// #include "altnew.h"

// using namespace std;
// int main(){
//   // Dlist<string> d1 = Dlist<string> ();

//   // d1.InsertFront("Name 1");
//   // d1.InsertFront("Name 2");
//   // d1.InsertFront("Name 3");
//   // d1.InsertFront("Name 4");

//   // d1.iterator()

//   Dlist<string> ilist;
//   string *ip = new string("Name 0");
//   ilist.InsertFront(*ip);
//   ilist.InsertFront("Name 1");
//   ilist.InsertFront("Name 2");
//   ilist.InsertFront("Name 3");
//   ilist.InsertFront("Name 4");


//   // ip = ilist.removeFront();
//   cout << *ilist << endl;

//   // while ( !ilist.IsEmpty() ) {
//   //   Record *r = ilist.RemoveFront();
//   //   cout << r->uniqname << endl;
//   //   delete r;
//   // }



// }

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