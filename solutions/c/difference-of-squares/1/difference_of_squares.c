#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number){
   int sum = 0;
    
    for(unsigned int i=1;i<=number;i++){
        
        sum = i + sum ;
    } 
    
    return sum*sum;
}

unsigned int sum_of_squares(unsigned int number){
  int sum = 0;
  unsigned int tmp = 0;
    for(unsigned int i=1;i<=number;i++){
        tmp = i*i;
        sum += tmp;
    } 
    return sum;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}