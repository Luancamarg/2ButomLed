/*
 * File:   main.c
 * Author: 19180060
 *
 * Created on 9 de Março de 2020, 10:12
 */


#include <xc.h>
#include "config.h"

#define LED1 PORTDbits.RD0
#define DIR__LED1 TRISDbits.TRISD0
#define LED2 PORTDbits.RD1
#define DIR__LED2 TRISDbits.TRISD1
#define BOTAO1 PORTDbits.RD2
#define DIR_BOTAO1 TRISDbits.TRISD2
#define BOTAO2 PORTDbits.RD3
#define DIR_BOTAO2 TRISDbits.TRISD3

#define DIR_ENTRADA 1
#define DIR_SAIDA 0

void main(void) 
{
    DIR__LED1 = 0;
    DIR__LED2 = 0;
    DIR_BOTAO1 = 1;
    DIR_BOTAO2 = 1;
    
    while (1)
    {
        __delay_ms(500);
        LED1 = 1;
        LED2 = 0;
       __delay_ms(500);
           
        LED1 = 0;
        LED2 = 1;   
    }     
          
    return;
}
