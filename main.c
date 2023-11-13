#include "DIO.h"
#define DELAY   1000000


void delay(void);

int main() {
    DIO_Init();

    // Task 1
    /*while(1){
      // Enable first LED in PORTF
      DIO_WritePin(&GPIO_PORTF_DATA_R ,1, 1);
      
      delay();
      
      // Enable first LED in PORTF
      DIO_WritePin(&GPIO_PORTF_DATA_R, 1, 0);
      
      // Enable second LED in PORTF
      DIO_WritePin(&GPIO_PORTF_DATA_R, 2, 1);
      
      delay();
      
      // Enable second LED in PORTF
      DIO_WritePin(&GPIO_PORTF_DATA_R, 2, 0);
      
      // Enable third LED in PORTF
      DIO_WritePin(&GPIO_PORTF_DATA_R, 3, 1);
    
      delay();
      
      // Enable third LED in PORTF
      DIO_WritePin(&GPIO_PORTF_DATA_R, 3, 0);
      
    }*/
    
    
    // Task 2
    /*while(1)
    {
           
      if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 0) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 4) == 0){
          DIO_WritePin(&GPIO_PORTF_DATA_R, 3, 1);
          delay();
      }
      
      else if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 0) == 0){
          DIO_toggleBit(&GPIO_PORTF_DATA_R, 1);
          delay();
      }
      
      else if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 4) == 0){
          DIO_toggleBit(&GPIO_PORTF_DATA_R, 2);
          delay();
      }      
    }*/
    
    // Task 3
    while(1){
      if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 0) == 0){
          if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 0 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 1);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 1);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 1);
            delay();
         }
      }
      
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 0) == 0){
         if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 1 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 1 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 1 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 1);
            delay();
         }
      }
      
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 0) == 0){
         if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 1 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 0 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 1);
            delay();
         }
      }
      
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 0) == 0){
         if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 1 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 1);
            delay();
         }
      }
      
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 0) == 0){
         if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 1 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 0 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 1);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 1);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 1);
            delay();
         }
      }
      
      
      // Button 2
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 4) == 0){
          if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 0 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 1);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 1);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 1);
            delay();
         }
      }
      
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 4) == 0){
         if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 1 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 1 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 1 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 1);
            delay();
         }
      }
      
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 4) == 0){
         if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 1 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 0 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 1);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 1);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 1);
            delay();
         }
      }
      
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 4) == 0){
         if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 1 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 1);
            delay();
         }
      }
      
       if (DIO_ReadPin(&GPIO_PORTF_DATA_R, 4) == 0){
         if(DIO_ReadPin(&GPIO_PORTF_DATA_R, 1) == 0 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 2) == 1 && DIO_ReadPin(&GPIO_PORTF_DATA_R, 3) == 0 ){
            DIO_WritePin(&GPIO_PORTF_DATA_R , 1, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 2, 0);
            DIO_WritePin(&GPIO_PORTF_DATA_R , 3, 1);
            delay();
         }
      }
      
    }

}

void delay(void){
  volatile unsigned long i;
  
  for(i = 0; i < DELAY ; i++){}
  
}