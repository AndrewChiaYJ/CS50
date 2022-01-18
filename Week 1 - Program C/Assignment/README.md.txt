
# Week 1 - Program C Assignment

### Contents

1. [Mario1.c](#Mario1.c)
2. [Cash.c](#Cash.c)
3. [Credit.c](#Credit.c)

## Assignments

### 1. Mario1.c
In this assignment, I am tasked to create those pyramids  in Mario in C, using hashes (`#`) for bricks. By allowing the user to decide just how tall the pyramids (a positive integer between 1-8), I will print a pyramid that corresponds with the height and width.

Here’s how the program might work if the user inputs  `8`  when prompted:

```
$ ./mario1
Height: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########

```
If the user doesn’t input a positive integer between 1 and 8, inclusive, when prompted, the program would re-prompt the user until they cooperate:

```
$ ./mario1
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
```
### 2. Cash.c

In this assignment, I am tasked to create a program which first, prompt the user on the amount of cash (in terms of how many cents) that the user need to exchange for smaller change.
After that, the program would find out which coins (quarters, dimes, nickels, and pennies ) and how many of each to hand to the customer. It is similar to a greedy algorithm to find out the most optimal number of coins to be given out.

### 3.Credit.c

In this assignment, I am tasked to create a program, which first prompt the user to enter a long string of numbers indicating their credit card numbers.
After that, the programme will first use the checksum method to check whether the string of number is a valid credit card number. If the number is valid from the check sum perspective, the programme will cross check with the requirement of AMEX, Mastercard, and Visa