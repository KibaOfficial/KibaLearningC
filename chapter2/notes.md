# Chapter 2 Notes

## Data Types

### Integer Types

| Specifier | Output                         | Example  |
|-----------|--------------------------------|----------|
| `d` or `i` | Signed decimal integer         | `392`    |
| `u`         | Unsigned decimal integer       | `7235`   |
| `o`         | Unsigned octal                 | `610`    |
| `x`         | Unsigned hexadecimal integer   | `7fa`    |
| `X`         | Unsigned hexadecimal integer (uppercase) | `7FA` |

### Floating-Point Types

| Specifier | Output                                    | Example     |
|-----------|-------------------------------------------|-------------|
| `f`         | Decimal floating point, lowercase        | `392.65`      |
| `F`         | Decimal floating point, uppercase        | `392.65`      |
| `e`         | Scientific notation, lowercase            | `3.9265e+2`   |
| `E`         | Scientific notation, uppercase            | `3.9265E+2`   |
| `g`         | Shortest representation: %e or %f        | `392.65`      |
| `G`         | Shortest representation: %E or %F        | `392.65`      |
| `a`         | Hexadecimal floating point, lowercase    | `-0xc.90fep-2`|
| `A`         | Hexadecimal floating point, uppercase    | `-0XC.90FEP-2`|

### Character Types

| Specifier | Output        | Example |
|-----------|---------------|---------|
| `c`         | Character     | `'a'`     |
| `s`         | String        | `"sample"`|

### Pointer Type

| Specifier | Output             | Example    |
|-----------|--------------------|------------|
| `p`         | Pointer address    | `b8000000`   |

### Special Specifiers

| Specifier | Output                                        | Example       |
|-----------|-----------------------------------------------|---------------|
| `n`         | Nothing printed.                             | (See below)   |
| `%`         | A % followed by another % character will write a single % to the stream. | `%`            |

#### Note for 'n' specifier

The corresponding argument must be a pointer to a signed int.
The number of characters written so far is stored in the pointed location.

---

## Basic Syntax

### Declarations and Assignments

```c
int number = 42;
float pi = 3.14;
char letter = 'A';
