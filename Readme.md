# Number System Conversion Project  

### Course: **SPC 2207 – Digital logic**  
### CAT ONE  
### Topic: **Automation of Number System Conversions**

---

## Group Members  

| Name | Registration Number |
|------|----------------------|
| Kinuthia Abraham Ngugi   | CT101/G/22378/24 |
| Mbau Victor Kagumba      | CT101/G/23670/24 | 
| Lawrence Kigotho Njoroge | CT101/G/21996/24 |
| Kimani Peter mwangi      | CT101/G/19791/23 |
| Griffin's Kimotho        | CT101/G/22430/24 |

---

## Project Overview

This project automates **conversion between number systems**:

- Binary (Base 2)  
- Octal (Base 8)  
- Decimal (Base 10)  
- Hexadecimal (Base 16)  

The user inputs a number, specifies its base, and selects a target base. The program converts the input to decimal internally, then converts it to the target base, handling validation and errors automatically.

---

## Process Documentation

### 1.1 Problem Statement
Manual number system conversions are time-consuming and prone to errors. The goal is to automate conversions with accuracy and efficiency.

### 1.2 Objectives
- Automate conversions between **binary, octal, decimal, and hexadecimal**.  
- Validate user input for correctness.  

---

### 1.3 Tools Used  
- **Language:** C  
- **Compiler:** VS Code, Dev-C++, Code::Blocks 
- **Version Control:** GitHub (for collaboration)

---

### 1.4. Design and Flow
1. **Input:** Read number, source base, and target base from user.  
2. **Convert to Decimal (`toDecimal`)**:  
   - Convert each digit to numeric value.  
   - Multiply by its positional power of the base.  
   - Sum all values to get decimal equivalent.  
3. **Convert from Decimal (`fromDecimal`)**:  
   - Repeatedly divide decimal by target base.  
   - Store remainders as digits.  
   - Reverse digits for correct representation.  
4. **Output:** Display the result in the target base.

---

### 1.5 Conclusion  
The program successfully automates number conversions between **binary, octal, decimal, and hexadecimal** systems.

---

## 2. Program Documentation  

### 2.1 Program Overview
This C program automates number system conversions between:

- **Binary** (base 2)
- **Octal** (base 8)
- **Decimal** (base 10)
- **Hexadecimal** (base 16)

It allows the user to enter:

1. The number to convert
2. The base of that number
3. The base to convert it into

The program then automatically performs the conversion and displays the final result.

---

### 2.2 Features

- Supports four major number systems (2, 8, 10, 16)
- Handles both uppercase and lowercase hexadecimal inputs
- Displays clean and user-friendly output
- Efficient and accurate conversions

### 2.3 Source Code

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long toDecimal(char num[], int base);
void fromDecimal(long long decimal, int base, char result[]);

int main() {
    char number[100], result[100];
    int fromBase, toBase;
    long long decimal;

    printf("Enter number: ");
    scanf("%s", number);

    printf("Convert from base (2, 8, 10, 16): ");
    scanf("%d", &fromBase);

    printf("Convert to base (2, 8, 10, 16): ");
    scanf("%d", &toBase);

    decimal = toDecimal(number, fromBase);
    fromDecimal(decimal, toBase, result);

    printf("\n%s (base %d) = %s (base %d)\n", number, fromBase, result, toBase);
    return 0;
}

long long toDecimal(char num[], int base) {
    int len = strlen(num);
    long long result = 0, power = 1;

    for (int i = len - 1; i >= 0; i--) {
        int digit;

        if (num[i] >= '0' && num[i] <= '9')
            digit = num[i] - '0';
        else if (num[i] >= 'A' && num[i] <= 'F')
            digit = num[i] - 'A' + 10;
        else if (num[i] >= 'a' && num[i] <= 'f')
            digit = num[i] - 'a' + 10;
        else {
            printf("Error: invalid character '%c'\n", num[i]);
            exit(1);
        }

        if (digit >= base) {
            printf("Error: '%c' is invalid for base %d\n", num[i], base);
            exit(1);
        }

        result += digit * power;
        power *= base;
    }
    return result;
}

void fromDecimal(long long decimal, int base, char result[]) {
    char digits[] = "0123456789ABCDEF";
    int i = 0;

    if (decimal == 0) {
        strcpy(result, "0");
        return;
    }

    while (decimal > 0) {
        result[i++] = digits[decimal % base];
        decimal /= base;
    }

    result[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - j - 1];
        result[i - j - 1] = temp;
    }
}
```
---

### 2.4 Function Descriptions.

| Function        | Purpose                                              |
| --------------- | ---------------------------------------------------- |
| `main()`        | Handles input/output and calls conversion functions. |
| `toDecimal()`   | Converts any base number to decimal.                 |
| `fromDecimal()` | Converts decimal number to target base.              |

---


### 2.5 Sample outputs.
<img width="2560" height="1440" alt="Image" src="https://github.com/user-attachments/assets/378d8472-0541-4564-8ba2-47d8224e6f85" />

<img width="2560" height="1440" alt="Image" src="https://github.com/user-attachments/assets/0e1391bb-4295-486c-afcb-291ec3cb3559" />
