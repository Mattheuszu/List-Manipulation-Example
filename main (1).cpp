/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <list>

int main()
{
    std::list<std::string> fruits{"apple", "banana", "cherry"};
    fruits.pop_back();
    for(std::string f : fruits){
        std::cout << f << " ";
    }

    return 0;
}