#include <iostream>
#include <string_view>
// always use string views and it will be ok to pass string literals , strings, and string_views...etc.

void say_my_name(std::string_view name){
    std::cout << "Hello your name is : " << name << std::endl;
}

int main(){

    std::string some_name{"John"};
    //say_my_name("John");
    //say_my_name(some_name);
    say_my_name(std::string_view("Samuel"));
   
    return 0;
}



#include <iostream>
void say_my_name(const std::string& name);
void process_name(std::string_view name_sv);

int main(){

    process_name("Daniel");
   
    return 0;
}

//Definitions
void say_my_name(const std::string& name){
    std::cout << "Your name is " << name << std::endl;
}

void process_name(std::string_view name_sv){
    
	say_my_name(name_sv); // Compiler error . Implicit conversion
						  // from std::string_view
                          // to std::string is not  allowed.
                          
    //Fix : Be explicit about the conversion
    //say_my_name(std::string(name_sv));
    
    
}

