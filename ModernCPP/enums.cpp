#include <iostream>

//Declare an enum type
//The default type associated with enum classes with C++ is int
//unsigned char : 0 ~ 255
enum class Month :  char {
    Jan = -1, January = Jan, Feb, Mar, 
    Apr, May, Jun,
    Jul, Aug, Sep,
    Oct = 100, Nov, Dec
};


int main(){

    Month month {Month::Jan};
    std::cout << "month : " << static_cast<int>(month) << std::endl;
    std::cout << "sizeof(month) : " << sizeof(month) << std::endl;

    return 0;
}


// using enums code

#include <iostream>
#include <string_view>

enum class Month {
    Jan , Feb, Mar, Apr ,
    May, Jun, Jul, Aug,
    Sep, Oct, Nov, Dec
};

std::string_view month_to_string(Month month){
    switch (month)
    {
        /*
        case Month::Jan : return "January";
        case Month::Feb : return "February";
        case Month::Mar : return "March";
        case Month::Apr : return "April";
        case Month::May : return "May";
        case Month::Jun : return "June";
        case Month::Jul : return "July";
        case Month::Aug : return "August";
        case Month::Sep : return "September";
        case Month::Oct : return "October";
        case Month::Nov : return "November";
        case Month::Dec : return "December";
        default : return "None";
        */ 
            // this syntax allows us to avoid using Month::Aug 
       using enum Month;
        case Jan : return "January";
        case Feb : return "February";
        case Mar : return "March";
        case Apr : return "April";
        case May : return "May";
        case Jun : return "June";
        case Jul : return "July";
        case Aug : return "August";
        case Sep : return "September";
        case Oct : return "October";
        case Nov : return "November";
        case Dec : return "December";
        default : return "None";
    }

}


// type aliases

#include <iostream>

int main(){

     using HugeInt = unsigned long long int; // Recommended in modern C++
     //typedef unsigned long long int HugeInt; // Older C++ syntax for type aliases
     HugeInt huge_number {123378997};

     std::cout << "sizeof(unsigned long long int ) : " << sizeof(unsigned long long int) << std::endl;
     std::cout << "sizeof(HugeInt) : " << sizeof(HugeInt) << std::endl;

    std::cout << "huge_number : " << huge_number << std::endl;

    return 0;
}




int main(){

    Month month {Month::Apr};
    std::cout << "month : " << month_to_string(month) << std::endl;
   
    return 0;
}


