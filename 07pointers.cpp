#include <iostream>
#include <cstring>

int main()
{
    /* TYPES DO NOT MATTER poiters work's with all data types*/

    /* --------------- null pointer --------------- */
    void *ptr = nullptr; // it stores nothing. and just because it's void, it's not any type so it does not know how many bytes to allocate in memory. AKA complete useless
    std::cout << "address of nullpointer ptr: " << &ptr << std::endl;

    // int ptr_val = *ptr;      // because it stores nothing "core will be dumped" then restof the own't run
    // std::cout << "The value stored in null pointer is: " << ptr_val << std::endl;

    /* --------------- pointer --------------- */
    int var_with_value = 20; // Pro tip: we are creating variable in stack porsion of the memory
    int *ptr1 = &var_with_value;
    std::cout << "now the address of ptr1 is: " << &ptr1 << " and the address of var_with_value is: " << &var_with_value << " and the value in the var_with_value accessed by ptr1 is: " << *ptr1 << std::endl;

    var_with_value = 30; // changing value of variable does not changes the address
    std::cout << "the value in the ptr1: " << *ptr1 << std::endl;

    /* can we change the pointer reference ?  -- spoiler alert you can't and SHOULDN'T -- */

    // int var_with_value1 = 30;
    // int var_with_value2 = 31;
    // int *ptr2 = &var_with_value1;
    // *ptr2 = &var_with_value2;

    /* variable in HEAP memory */
    char *buffer = new char[8];
    memset(buffer, 2, 8);                              //syntax: memset(variable_name,data,size_byte) need header file <cstring>
    uint8_t *buffer_value = (uint8_t *)*&buffer;       // uint8_t is SO important because if we use int we will get 4*8=32byte result
    std::cout <<"The value in HEAP of size 8 byte"<< unsigned(*buffer_value) << std::endl; //unsigned is used because uint8_t variable with ASCII character value lessthen 5 is invisible(prints blank space)

    delete[] buffer; //all ways delete HEAP. PLEASE!!!

    /* --------------- pointer to pointer ----------------- */
    int **ptrToPtr = &ptr1;     //
    std::cout<<"value(address) stored in *ptrToPtr: "<< *ptrToPtr <<", which is equal to address of var_with_value: "<< &var_with_value <<std::endl;
    std::cout << "Value in pointer ptr1 accessed by **ptrToPtr: " << **ptrToPtr << std::endl;
}