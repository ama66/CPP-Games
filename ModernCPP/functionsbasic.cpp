#include <iostream>
#include <array>


//double sum( double scores[], size_t count){ this array scores decay into a pointer so cannot use sizeof(scores) because it returns the size of a double pointer (8 bytes)
// not the array. Also std::size(scores) will not compile! 


double sum (double* scores , size_t count){

    double score_sum{};

   // std::cout << "sizeof(scores)  : " << sizeof(scores) << std::endl;
   // std::cout << "sizeof(int*) : " << sizeof (int *) << std::endl;
   //size_t arr_size = std::size(scores);

   for(size_t i{0} ; i < count ; ++i){
       score_sum += scores[i];
   }
    return score_sum;
}



int main(){
    double my_scores[]{10.5,34.3,4.8,6.5};
    //std::cout << "sizeof(my_scores) : " << sizeof(my_scores) << std::endl;
   
// here size(my_scores) works! unlike when scores [] is used in function params where it decays to a pointer! 
   double result = sum(my_scores,std::size(my_scores));
   std::cout << "result : " << result << std::endl;
 
    return 0;
}







###############################################################################
#include <iostream>


double sum ( double scores[], size_t count){
    double sum{};
        
    for(size_t i{} ; i < count ; ++i){
       sum += scores[i];
    }
    return sum;
}


int main(){

    double student_scores[] {10.0,20.0,30.0,4,5,6,7,8,9}; // Less than 5 parameters

    double result = sum(student_scores,std::size(student_scores));
    std::cout << "result : " << result << std::endl;
   
    return 0;
}
