/*  Safe-Crack-Template
*  
*   Template for safe cracking actvity. Activity 3
*  
*   NOTE: To be expanded based on the information in Activity 3
*
*   Board: NUCLEO L476RG
*   Author: Dr James H. Chandler, University of Leeds 2021  
*/

#include "mbed.h"

//DigitalOut leds 
DigitalOut led4(PA_4);      //Assign pin PA_4 to led4
//Add additional leds here

//DigitalIn buttons 
DigitalIn button1(PC_10);
DigitalIn button2(PC_11);
DigitalIn button3(PD_2);

//declare initialisation functions
void init_leds();           // Declare led initialisation function 
void init_buttons();        // Declare buttons initialisation function 
//Add led_check function declarations for all leds here
int led4_check();           // Declare led4 check function


int main()
{
init_leds();
init_buttons();

    while (true) {
        
                //Add code to call led_check functions and write the result to the 4 leds.
                led4.write(led4_check());                
    }
}

//Implement initialisation function
void init_leds(){
    //Add initialisation code for all leds here
    led4.write(0);
}

void init_buttons(){
    button1.mode(PullNone);  //turn off internal pull up / pull down resistors
    button2.mode(PullNone); 
    button3.mode(PullNone); 
}

//Add led_check functions for all leds here.

int led4_check(){
    if(button3.read() == 1){return 1;}
    else {return 0;}
};