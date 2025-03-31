# **Printf Project**

## **Table of Content**
1. **Project Overview**
2. **Purpose**
3. **Main Features**
4. **Intended Audience**
5. **Supported Specifiers**
6. **Compilation Instructions**
7. **Language**
8. **Challenges**
9. **Reference**
10. **Contributors**

---

## **Project Overview**

The **Printf Project** is a custom implementation of the standard C library function `printf`. This project aims to mimic the behavior of `printf` by handling specific format specifiers.

---

## **Purpose**

The purpose of this project is to:

- **Improve understanding** of C programming concepts such as variadic functions, memory allocation, and system calls.
- **Foster collaboration** through team-based development.

---

## **Main Features**

- **Custom implementation** of the `printf` function.
- **Support** for a subset of `printf` conversion specifiers.

---

## **Intended Audience**

This project is designed for:

- **Holberton students** learning the intricacies of C programming.
---

## **Supported Specifiers**

### **What is a format specifier?**

A format specifier is a special sequence of characters used in formatted input and output functions (like `printf`, `_printf`, `scanf`) to define how data should be formatted and displayed or read.

| **Format Specifier** | **Description**                    | **Example Output**   |
|-----------------------|------------------------------------|-----------------------|
| `%c`                 | Prints a single character         | Input: `%c` -> H     |
| `%s`                 | Prints a string of characters     | Input: `%s` -> Hello |
| `%%`                 | Prints a literal `%` character    | Input: `%%` -> %     |
| `%d`                 | Prints a signed decimal integer   | Input: `%d` -> 42    |
| `%i`                 | Prints a signed integer (identical to `%d`) | Input: `%i` -> 42 |

---

## **Compilation Instructions**

All the files that were used are compiled using:  

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

---

## **Language**

The function `_printf()` was created using the **C programming language**. As a low-level language, C gives us the ability to build and control functions from the ground up while defining their specific outputs.  

Currently, we are in the foundational phase of learning C, and this project serves as a way to test our understanding by implementing `_printf()` entirely from scratch.

---

## **Challenges**

- **Understanding** the behavior of variadic functions.
- **Handling edge cases** for format specifiers.
- **Maintaining consistency** with the standard library function's output.

---

## **Reference**

For more details, refer to the `man 3 printf` documentation.

---

## **Contributors**

- **Jimmy Carrera** - [GitHub](https://github.com/Jcarrera007)
- **Gustavo Guevara** - [GitHub](https://github.com/GGGtrainer)

Repository: [holbertonschool-printf](https://github.com/GGGtrainer/holbertonschool-printf)
