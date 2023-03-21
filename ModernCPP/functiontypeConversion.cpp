#include <iostream>


void print_sum(int a, int b){
	
	int sum = a + b;
	std::cout << "sizeof(a) : " << sizeof(a) << std::endl;
	std::cout << "sizeof(b) : " << sizeof(b) << std::endl;
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
	std::cout << "sum : " << sum << std::endl;
	std::cout << std::endl;
}


int main(){

    double a{4.5};
    double b{7.8};

    print_sum(a,b);
   
    return 0;
}

// a reference is a true alias so should not pass a different type otherwise you get a compiler error


#include <iostream>

void increment(int& value);
void print_out(const int & value);

int main(){

    /*
    int int_var{3};
    increment(int_var);
    print_out(int_var);
    */

   double double_var{3.6};

   int data = double_var;

   increment(data);
   print_out(double_var);
    
    return 0;
}

void increment(int& value){
    value++;
	std::cout << "value incremented to : " << value << std::endl;
}

void print_out(const int & value){
    std::cout << "value : " << value << std::endl;
}


