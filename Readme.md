# Number System Conversion Project  

### Course: **SPC 2207 – Digital logic**  
### CAT ONE  
### Topic: **Automation of Number System Conversions**

---

## Group Members  

| Name | Registration Number |
|------|----------------------|
| Kinuthia Abraham Ngugi | CT101/G/22378/24 |
|  |

---

## 1. Process Documentation  

### 1.1 Project Objective  
The goal of this project is to **automate number system conversions** from one base to another (Binary, Octal, Decimal, Hexadecimal) using the **C programming language**.

---

### 1.2 Problem Statement  
In digital systems, data can be represented in different number systems.  
Manual conversions between bases (for example, binary to decimal) can be slow and error-prone.  
This project provides an automated way to convert numbers accurately and quickly.

---

### 1.3 Design Process  
1. Identify the bases to support — **2, 8, 10, and 16**.  
2. Write a C function to convert any base to decimal (`toDecimal`).  
3. Write another function to convert from decimal to the target base (`fromDecimal`).  
4. Combine both conversions inside `main()` to automate the process.  
5. Test the program with different inputs.

---

### 1.4 Tools Used  
- **Language:** C  
- **Compiler:** Code::Blocks
- **Version Control:** GitHub (for collaboration)

---

### 1.5 Testing Process  

| Input Number | From Base | To Base | Expected Output |
|---------------|------------|---------|-----------------|
| 1010 | 2 | 10 | 10 |
| 47 | 10 | 16 | 2F |
| 77 | 8 | 2 | 111111 |
| 2F | 16 | 10 | 47 |

All test results matched the expected outputs  

---

### 1.6 Challenges Faced  
- Handling both uppercase and lowercase hexadecimal letters.  
- Reversing the output string after conversion.  
- Ensuring correct base validation.  

---

### 1.7 Conclusion  
The program successfully automates number conversions between **binary, octal, decimal, and hexadecimal** systems.  
It demonstrates understanding of **loops, conditionals, string manipulation, and arithmetic operations** in C.

---

## 💻 2. Program Documentation  

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
- Uses modular design through two main functions (toDecimal and fromDecimal)
- Displays clean and user-friendly output
-Efficient and accurate conversions

---

### 2.3 Source Code  
```c
#include <stdio.h>
#include <string.h>

int toDecimal(char num[], int base);
void fromDecimal(int decimal, int base, char result[]);

int main() {
    char number[100], result[100];
    int fromBase, toBase, decimal;

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

int toDecimal(char num[], int base) {
    int len = strlen(num);
    int result = 0, power = 1;

    for (int i = len - 1; i >= 0; i--) {
        int digit;

        if (num[i] >= '0' && num[i] <= '9')
            digit = num[i] - '0';
        else if (num[i] >= 'A' && num[i] <= 'F')
            digit = num[i] - 'A' + 10;
        else if (num[i] >= 'a' && num[i] <= 'f')
            digit = num[i] - 'a' + 10;
        else
            digit = 0;

        result += digit * power;
        power *= base;
    }
    return result;
}

void fromDecimal(int decimal, int base, char result[]) {
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
### 2.4 Key Functions Explained

#### int toDecimal(char num[], int base)
Converts a number from any base (2, 8, 10, or 16) into its decimal equivalent.

**How it works**:
- Iterates through digits from right to left.
- Multiplies each digit by increasing powers of the base.
- Adds all the results to form the decimal number.

---

#### void fromDecimal(int decimal, int base, char result[])
Converts a decimal number into a target base (2, 8, 10, or 16).

**How it works**:
- Divides the decimal number repeatedly by the target base.
- Stores the remainders as digits in reverse order.
- Reverses the result to get the correct representation.
  
---
