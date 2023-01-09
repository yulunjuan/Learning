#include<iostream>


int main(){
    
    /*
    //Declare and initialize pointer
    int *p_number {}; // Will initialize with nullptr
    double *p_fractional_number {};

    // Explicitly initialize with nullptr
    int *p_number1 {nullptr};
    double *p_fractional_number1 {nullptr};

    //Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;
    */

    /*
    // Initializing pointers and assigning them data
    // We know that pointers store addresses of variables
    int int_var {43};
    int *p_int {&int_var}; // The address of operator (&)

    std::cout << " Int var : " << int_var << std::endl;
    std::cout << " p_int (Address in memory) : " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1 {65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << " p_int (Address in memory) : " << p_int << std::endl;

    //Can't cross assign between pointers of different types
    int *p_int1 {nullptr};
    double double_var {33};

    //p_int1 = &double_var; //Compile error

    // Dereferencing a pointer
    int *p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std::cout << " value : " << *p_int2 << std::endl; // Dereferencing a pointer
    */
    /*
    const char *message {"Hello World!"};
    // *message = 'B'; // Complie error
    std::cout << " message : " << message << std::endl;

    // Allow user to modify the string 
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << " message1 : " << message1 << std::endl;
    */
    /*
    // How we've used pointers so far
    int number {22}; // Stack

    int *p_number = &number;

    std::cout << std::endl;
    std::cout << " Declaring pointer and assigning address : " << std::endl;
    std::cout << " number : " << number << std::endl;
    std::cout << " p_number : " << p_number << std::endl;
    std::cout << " &number : " << &number << std::endl;
    std::cout << " *p_number : " << *p_number << std::endl;

    int *p_number1; // Uninitialized pointer, contains junk address
    int number1 {12};
    p_number1 = &number1; // Make it point to a valid address
    std::cout << std::endl;
    std::cout << " Uninitialized pointer : " << std::endl;
    std::cout << " *p_number1 : " << *p_number1 << std::endl;
    */

    /*
    // BAD
    // Writing into uninitialized pointer through dereference
    int *p_number2; // Contains junk address : could be anything
    *p_number2 = 55; // Writing into junk address : BAD!
    std::cout << std::endl;
    std::cout << " Writing into uninitialized pointer through dereference : " << std::endl;
    std::cout << " p_number2 : " << p_number2 << std::endl;
    std::cout << " *p_number2 : " << *p_number2 << std::endl;
    
    
    // Initializing pointer to null
    // int *p_number3 {nullptr}; //Also works
    int *p_number3 {}; // Initialized with pointer equivalent of zero : nullptr
                       // A pointer pointing nowhere
    // *p_number3 = 33; // Writing into a pointer pointing nowhere : BAD, CRASH

    std::cout << std::endl;
    std::cout << " Reading and writing through nullptr : " << std::endl;
    std::cout << " p_number3 : " << p_number3 << std::endl;
    std::cout << " *p_number3 : " << *p_number3 << std::endl;
    */

    /*
    // Dynamic heap memory
    int *p_number4 {nullptr};
    p_number4 = new int;    // Dynamically allocate space for a single int on the heap
							// This memory belongs to our program from now on. The system
							// can't use it for anything else, untill we return it.
							// After this line executes, we will have a valid memory location
							// allocated. The size of the allocated memory will be such that it
							// can store the type pointed to by the pointer
    
    *p_number4 = 77; // Writting into dynamically allocated memory
	std::cout << std::endl;
	std::cout << "Dynamically allocating memory : " << std::endl;
	std::cout <<"*p_number4 : " << *p_number4 << std::endl;
    */


     //It is also possible to initialize the pointer with a valid
	//address up on declaration. Not with a nullptr
     int *p_number5{ new int}; // Memory location contains junk value
     int *p_number6{ new int (22) }; // use direct initialization
     int *p_number7{ new int { 23 } }; // use uniform initialization
	 
	 std::cout << std::endl;
	 std::cout << "Initialize with valid memory address at declaration : " << std::endl;
	 std::cout << "p_number5 : " << p_number5 << std::endl;
	 std::cout << "*p_number5 : " << *p_number5 << std::endl; // Junk value
	 
	 std::cout << "p_number6 : " << p_number6 << std::endl;
	 std::cout << "*p_number6 : " << *p_number6 << std::endl;
	 
	 std::cout << "p_number7 : " << p_number7 << std::endl;
	 std::cout << "*p_number7 : " << *p_number7 << std::endl;
	 
	 //Remember to release the memory
	  delete p_number5;
	  p_number5 = nullptr;
	  
	  delete p_number6;
	  p_number6 = nullptr;
	  
	  delete p_number7;
	  p_number7 = nullptr;

    //Can reuse pointers
      p_number5 = new int(81);
      std::cout << "*p_number : " << *p_number5 << std::endl;


      delete p_number5;
      p_number5 = nullptr;

     //Calling delete twice on a pointer : BAD!
      p_number5 = new int(99);
      std::cout << "*p_number5 : " << *p_number5 << std::endl;


      delete p_number5;
      delete p_number5;


    std::cout << "Program is ending well" << std::endl;




    return 0;
}