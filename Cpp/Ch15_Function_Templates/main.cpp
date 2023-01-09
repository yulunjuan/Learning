#include<iostream>
#include<string>
#include<concepts>

template <typename T> T maximum ( T a , T b ) requires std::integral <T> {
    return ( a > b )? a : b ;
}

int main(){
    
    int a {10};
    int b {23};
    double c {34.7};
    double d {23.4};
    std::string e {"hello"};
    std::string f {"world"};
    
    auto max = maximum (c,d);
    std::cout << " Result : " << max << std::endl;


    return 0;
}