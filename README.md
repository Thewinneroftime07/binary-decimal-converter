# Binary to Decimal and Reverse Converter (C)

This C program demonstrates the use of **recursive functions** to:
- Convert a **decimal number to binary**
- Convert a **binary number to decimal**
- Print an **array in reverse order**

## Features

- Converts **decimal to binary** using recursion
- Converts **binary to decimal** using recursion and powers of 2
- Prints the elements of an array in **reverse order**
- Simple CLI interaction for testing each function

## How It Works

### Decimal to Binary
Uses recursion and division by 2 to convert a decimal number into binary, printing bits in correct order.

### Binary to Decimal
Uses recursion and `pow(2, position)` to compute the decimal value of each binary digit.

### Reverse Array Print
Recursively prints an integer array from the last element to the first.

## Requirements

- C compiler (e.g., `gcc`)
- Standard math library (`-lm` when compiling)

## How to Compile & Run

```bash
gcc main.c -o binconverter -lm
./binconverter
