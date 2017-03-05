/* 
 * File:        main.c
 * Author:      Marco Müller
 * Project:     PICture18F2550 
 * Created on 4. März 2017, 17:19
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <xc.h>


/*********************************************************************
* Initialisierung des PICs
*/

void initPIC(void)
{
    TRISA = 0x0F;                    // RA0-RA3: Output, RA4 + RA5: Input
    TRISB = 0x00;                    // PortB: Output 
    TRISC = 0x07;                    // RC0-RC2:Input 
   
    #pragma config FOSC = HS         // 16MHz Oscillator
    #pragma config PWRT = ON         // Power up timer enabled
    #pragma config BOR = OFF         // Brown-out Reset disabled
    #pragma config WDT = OFF         // Watch dog timer is always disabled
    #pragma config MCLRE = ON        // MCLR enabled
    #pragma config LVP = OFF         // Single-Supply ICSP disabled

    #define true 1
    #define false 0
}

/*********************************************************************
* Main Routine
*/

void main (void)
{
   initPIC();
   /* Alle Pins an den Output-Ports auf 0 setzen */
   PORTA = 0x00;
   PORTB = 0x00;
   PORTC = 0x00;
   
   

   /* Endlosschleife */
   while(1)
   {
       /* Hier der Code, der ausgeführt werden soll */
   }
}

