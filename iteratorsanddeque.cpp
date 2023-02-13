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

int main(){
    // ----- DOUBLE ENDED QUEUE -----
    // A double ended queue (Deck) is a dynamic array that can 
    // be expanded or contracted on both ends
    deque<int> nums = {1,2,3,4};
    nums.push_front(0);
    nums.push_back(5);
    for(int x: nums)
        cout << x << endl;
    
    // You can access index values, but they are costly
    // because values aren't stored contigously, but
    // instead use multiple arrays
    cout << nums[0] << endl;
    
    // ----- END DOUBLE ENDED QUEUE -----
    
    // ----- ITERATORS -----
    // Iterators are used to point at container
    // memory locations
    vector<int> nums2 = {1,2,3,4};
    
    // Define an iterator as the same type
    vector<int>::iterator itr;
    
    // Refer to the vectors begin and end while
    // incrementing the iterator
    for(itr = nums2.begin(); 
            itr < nums2.end(); 
            itr++){
        
        // Get value at the pointer
        cout << *itr << endl;
    }
    
    // You can also increment a set number of spaces
    // Create an iterator and point it at the beginning
    // of the vector
    vector<int>::iterator itr2 = nums2.begin();
    
    // Advance 2 spaces
    advance(itr2, 2);
    cout << *itr2 << endl;
    
    // Next works like advance, but it returns an 
    // iterator
    auto itr3 = next(itr2, 1);
    cout << *itr3 << endl;
    
    // Previous moves a set number of indexes and
    // returns an iterator
    auto itr4 = prev(itr2, 1);
    cout << *itr4 << endl;
    
    // You can also insert at a defined index
    vector<int> nums3 = {1,4,5,6};
    vector<int> nums4 = {2,3};
    auto itr5 = nums3.begin();
    advance(itr5, 1);
    copy(nums4.begin(), nums4.end(), 
            inserter(nums3, itr5));
    
    for(int &i: nums3)
        cout << i << endl;
}
