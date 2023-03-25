#include <iostream>


int max(int a, int b){
    std::cout << "int overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, double b){
    std::cout << "double overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(int a, double b){
    std::cout << "(int,double) overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, int b){
    std::cout << "(double,int) overload called" << std::endl;
    return (a>b)? a : b; 
}

double max(double a, int b,int c){
    std::cout << "(double,int,int) overload called" << std::endl;
    return a;
}

std::string_view  max(std::string_view a, std::string_view b){
    std::cout << "(string_view,string_view) overload called" << std::endl;
     return (a>b)? a : b;
}

int main(){

    int x{4};
    int y{9};
    double a{5.4};
    double b{7.4};

    auto result = max(b,x,y);

    max("Hello","World");
   
    return 0;
}


//pointers and arrays example

#include <iostream>

double max(double * numbers, size_t count){
    std::cout << "doubles overload called" << std::endl;
    double maximum{0};
    
    for(size_t i{0}; i < count ;++i){
        if(numbers[i]> maximum)
            maximum = numbers[i];
    }
    return maximum;   
}

int max(int * numbers, size_t count){
    std::cout << "ints overload called" << std::endl;

    int maximum{0};
    
    for(size_t i{0}; i < count ;++i){
        if(numbers[i]> maximum)
            maximum = numbers[i];
    }
    return maximum;   
}



int main(){

	double  doubles[] {10.0,30.0,12.3};
	int  ints[] {1,2,5,2,8,4};

    auto result = max(ints,std::size(ints));
    std::cout << "result : " << result << std::endl;
   
    return 0;
}


