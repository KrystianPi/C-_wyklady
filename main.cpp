/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void fun1(int a){
    a = 5;
}

void fun2(int* a){
    *a = 5;
}
main(){
int b = 10;
fun1(b);
std::cout<<"fun1 " << b << std::endl;
fun2(&b);
std::cout << "fun2 " << b <<std::endl;
}