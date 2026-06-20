#include "grains.h"

uint64_t square(uint8_t index)
{
    uint64_t resultado = 1;
    
    for (uint8_t i = 0; i < index; i++) {
        if(i==0){
            resultado = 1;
        }
        else{
            resultado *= 2 ;
        }
    }
    if(index==0)
    {
        return 0;
    }
    else{
        return resultado;
    }
}

uint64_t total(void)
{
    uint64_t soma = 0;
    for (uint8_t index = 1; index <= 64; index++) {
        soma += square(index);
    }
    return soma;
}