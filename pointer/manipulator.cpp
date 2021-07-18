// Sample pointer init and manipulation : 

#include<iostream>

int main()
{
    //assigning a integer value to a variable
    int i = 10;
    // declaring a variable as pointer and assigning the address of i variable.
    int* p = &i;
    
    // printing the address of the variable i 
    std::cout << "address of variable i (10) : " << &i << std::endl;
    // printing the address of the variable i
    std::cout << "size of the variable i : " << sizeof(i) << std::endl;

    // printing the content of the variable p
    std::cout << "value of the variable p : " << p << std::endl;
    // printing the address of the variable p 
    std::cout << "address of the varible p : " <<  &p << std::endl;
    // size of the variable p 
    std::cout << "size of the variable p  : " <<  sizeof(p) << std::endl;
}
