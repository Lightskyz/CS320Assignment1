#CS320Assignment1
__Name__ : Antoine Rakotozafy  
**Email** : antoine.rakotozafy@gmail.com

___

###Prog1_1  

This program allow the computer to tell us what's our name. I store the name in a variable because we need it two times (in the title and for the sentence display).

**To compile it :**
`gcc -o prog1_1 prog1_1.c`

**To run it :**
`./prog1_1`


___

###Prog1_2

This program allow the computer to ask us, what's our first name. Then open a input field where we can answer. And then he tell us :
> Hello **firstName**. Nice to meet you !

**To compile it :**
`gcc -o prog1_2 prog1_2.c`

**To run it :**
`./prog1_2`

___

###Prog1_3

This program allow to calculate the hyperbolic cosine of an angle in degrees.

**To compile it :**
`gcc -o prog1_3 prog1_3.c -lm`  
I add the option -lm to compile it with math library.

**To run it :**
`./prog1_3`

___

###Prog1_4

This program allow us to have the value of a cosine wave with two command line arguments (number of elements and step size in degree).  

On the first line, the value of the angle in degree that we'll calculate.  
On the second line, the value of the cos of this values.

**To compile it :**
`gcc -o prog1_4 prog1_4.c -lm`  
I add the option -lm to compile it with math library.

**To run it :**
`./prog1_4 X Y`  

* With **X**, the first argument which is : number of elements to produce  
* And **Y**, the seconde argument which is : 
the step size in degrees
