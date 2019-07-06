#!/bin/bash
wget https://raw.githubusercontent.com/apandada1/c/master/first-n-prime-printer.c
gcc first-n-prime-printer.c -lm -o prime.exe
echo
echo
echo -e  ******"\e[96m"Instructions"\e[39m"******
echo -e "\e[93m"prime.exe"\e[39m" is saved.
echo -e To run the program enter the command 
echo -e "\e[92m""./prime.exe number-of-primes"
echo -e "\e[39m"eg, "\e[92m"./prime.exe 5"\e[39m" will provide the following output
echo -e "\e[93m"1 2
echo -e 2 3
echo -e 3 5
echo -e 4 7
echo -e 5 11"\e[39m"
echo
echo -e To save the output into a file enter the command
echo -e "\e[92m""./prime.ext number-of-primes > name-of-prime.txt"
echo -e "\e[39m"For example "\e[92m""./prime.exe 5 > list.txt""\e[39m" will save the output into a file named "\e[93m""list.txt"
