#include <iostream>

int main(){

    //Capture lists
    /*
     double a{10};
     double b{20};
     
     auto func = [a,b](){
         std::cout  << "a + b : " << a + b << std::endl;
     };
     func();
     */

    //Capturing by value
    /*
     int c{42};
     
     auto func = [c](){
         std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
         func();
         ++c;
     }
     */

    //Capture by reference
     int c{42};
     
     auto func = [&c](){
         std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
         func();
         ++c;
     }
    
    return 0;
}


//capture all by either value or reference 

 //Capture everything by value
    /*
     int c{42};
     
     auto func = [=](){
         std::cout << "Inner value : " << c << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << std::endl;
         func();
         ++c;
     }
     */


    //Capturing all reference
     int c{42};
     int d{5};
     
     auto func = [&](){
         std::cout << "Inner value : " << c << std::endl;
         std::cout << "Inner value(d) : " << d << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << std::endl;
         func();
         ++c;
     }
  
    return 0;
}
