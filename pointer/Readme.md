#Pointer

- pointer allows us to work more directly with the memory.
- Specifically, pointers allow us to work with the addresses at which data are stored within main memory or primary memory or RAM.
------------------
```cpp
#include<iostream>

int main()
{
    // assigning a value to variable
    unsigned int value = 3;
    // initializing pointer which will point to a int data-type
    unsigned int* p;
    // copying the address of the variable value to the pointer p 
    p = &value;
    
}
```
In the above code , content of the variable will not be stored to varible P but the adress of the value variable will be stored. 

Pointer takes 4 byte to store the address in 32-bit machine and 8 byte in 64 bit machine.
------------------

