#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <numeric>
#include <cmath>
#include <sstream>
#include <deque>
#include <iterator>
using namespace std;

// ----- TEMPLATE FUNCTIONS -----

// We use templates to create functions or classes
// that can work with many types
// Templates differ from function overloading in that
// instead of having a function that does similar
// things with different objects a template does the
// same thing with different objects

// This says this is a function template that generates
// functions that except 1 parameter
template <typename T>
void Times2(T val) {
    cout << val << " * 2 = " <<
        val * 2 << endl;
}

// Receive multiple parameters and return a value
template <typename T>
T Add(T val, T val2) {
    return val + val2;
}

// Work with chars and strings
template <typename T>
T Max(T val, T val2) {
    return (val < val2) ? val2 : val;
}

// ----- END OF TEMPLATE FUNCTIONS -----

// ----- TEMPLATE CLASSES -----

// Template classes are classes that can work with 
// different data types

// You can define that you may receive parameters
// with different types, but they don't have to
// be different

template <typename T, typename U>

class Person {
public:
    T height;
    U weight;

    static int numOfPeople;

    Person(T h, U w) {
        height = h, weight = w;
        numOfPeople++;
    }
    void GetData() {
        cout << "Height : " <<
            height <<
            " and Weight : " <<
            weight << endl;
    }
};

// You have to initialize static class members
template<typename T, typename U> int Person<T, U>::numOfPeople;

//  initialize numOfpeople as int but need this template stuff 
// to fully describe the class Person 

int main() {
    // ----- TEMPLATE FUNCTIONS -----
    // The template function can receive ints or floats
    Times2(5);
    Times2(5.3);

    // Multiple parameters and returned value
    cout << "5 + 4 = " <<
        Add(5, 4) << endl;
    cout << "5.5 + 4.6 = " <<
        Add(5.5, 4.6) << endl;

    // Get biggest value
    cout << "Max 4 or 8 = " <<
        Max(4, 8) << endl;
    cout << "Max A or B = " <<
        Max('A', 'B') << endl;
    cout << "Max Dog or Cat = " <<
        Max("Dog", "Cat") << endl;

    // ----- END OF TEMPLATE FUNCTIONS -----

    // ----- TEMPLATE CLASSES -----

    // When creating the object you must define the 
    // data types used
    Person<double, int> mikeTyson(5.83, 216);
    mikeTyson.GetData();

    // You access static values using the object
    // and not the class
    cout << "Number of people : " <<
        mikeTyson.numOfPeople << endl;

    // ----- END OF TEMPLATE CLASSES -----

    return 0;
}
