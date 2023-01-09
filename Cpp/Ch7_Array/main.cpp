#include<iostream>


int main(){
    /*
    //Declare an array of ints
    int scores [10]; //Junk data
    */
    /*
    //Read data
    std::cout << " scores[0] :" << scores[0] << std::endl;
    std::cout << " scores[2] :" << scores[2] << std::endl;
    
    //Read with a loop
    for (size_t i {0} ; i < 10 ; i++){
        std::cout << " scores[" << i << "] :" << scores[i] << std::endl;
    }
    */
    /*
    //Write data into an array
    for (size_t i {0}; i < 10 ; i++){
        scores[i] = i*10;
    }

    //Print the data out
    for (size_t i{0}; i < 10; i++ ){
        std::cout << " scores[" << i << "] :" << scores[i] << std::endl;
    }
    */
    /*
    // *** Omit the size of the array at declaration ***
    int class_sizes[] {10,12,15,11,18,17,23};

    //Will print this with a range base for loop
    for (auto value : class_sizes ){
        std::cout << " value : " << value << std::endl;
    }
    */

    /*
    //Read only array
    const int birds[] {10,12,15,11,18,17,23,56};
    birds[2] = 8;
    */

    /*
    //Sum up scores array, store result in sum
    int scores[] {2,5,8,2,5,6,9};
    int sum {0};

    for ( int element : scores){
        sum += element;
    }
    std::cout << "Score Sum :" << sum << std::endl;
    */

    int scores[] {1,2,3,4,5,6,7,8,9,10};
    /*
    int count {std::size(scores)};

    for (size_t i {0}; i < count ; i++){
        std::cout << " scores[" << i << "] :" << scores[i] << std::endl;
    }
    */
    /*
    //Range based for loop
    for ( auto i : scores){
        std::cout << " value : " << i << std::endl;
    }
    */

    //Arrays of characters

    
    // Declare array
    //char message[5] {'H','e','l','l','o'}; // The old version of c++ could have error in this array because the array isn't null terminated
    //char message[] {'H','e','l','l','o','\0'}; //The correct way of null termination

    /*
    //Print out the array through looping
    std::cout << " message : ";
    for (auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
    

    //Change charaters in our array
    message[1] = 'a';

    //Print out the array through looping
    std::cout << " message : ";
    for (auto c : message){
        std::cout << c;
    }
    std::cout << std::endl;
    */

    /*
    // Will probably print garbage after your char array
    //std::cout << "message : " << message << std::endl;

    //If a character array is null terminated, it's called as C-String
    char message1[] {'H','e','l','l','o','\0'};
    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    char message2[6] {'H','e','l','l','o'};
    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

    char message3[] {'H','e','l','l','o'}; // This is not a C-String
                                           // as there is not a null character
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << sizeof(message3) << std::endl;


    //String literal
    char message4[] {"Hello"};
    std::cout << "message4 : " << message4 << std::endl;
    std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;
    */
    
    return 0;
}