# Chapter 2 Notes

## Data Types

### Data Types, Declarations, and Bit Sizes

| Data Type           | Declaration                     | Bit Size    | Range                                               |
| ------------------- | ------------------------------- | ----------- | --------------------------------------------------- |
| char                | `char myChar;`                  | 8           | -128 to 127 (signed), 0 to 255 (unsigned)            |
| char[]              | `char myString[10];`            | Varies      |                                                     |
| short               | `short myShort;`                | 16          | -32,768 to 32,767 (signed), 0 to 65,535 (unsigned)  |
| int                 | `int myInt;`                    | 32          | -2,147,483,648 to 2,147,483,647 (signed)             |
| unsigned int        | `unsigned int myUnsignedInt;`   | 32          | 0 to 4,294,967,295 (unsigned)                       |
| long                | `long myLong;`                  | 32 or 64    | -2,147,483,648 to 2,147,483,647 (signed)            |
| unsigned long       | `unsigned long myUnsignedLong;` | 32 or 64    | 0 to 4,294,967,295 (unsigned)                      |
| long long           | `long long myLongLong;`         | 64          | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (signed) |
| unsigned long long  | `unsigned long long myUnsignedLongLong;` | 64      | 0 to 18,446,744,073,709,551,615 (unsigned)          |
| float               | `float myFloat;`                | 32          |                                                     |
| double              | `double myDouble;`              | 64          |                                                     |
| long double         | `long double myLongDouble;`     | 80 or 128   |                                                     |
| size_t              | `size_t mySize;`                | 32 or 64    |                                                     |

## Predefined Integer Types and Sizes

| Type                   | Declaration                       | Bit Size    | Range                                               |
| ---------------------- | --------------------------------- | ----------- | --------------------------------------------------- |
| int8_t                 | `int8_t myInt8;`                  | 8           | -128 to 127 (signed), 0 to 255 (unsigned)            |
| uint8_t                | `uint8_t myUInt8;`                | 8           | 0 to 255 (unsigned)                                 |
| int16_t                | `int16_t myInt16;`                | 16          | -32,768 to 32,767 (signed), 0 to 65,535 (unsigned)  |
| uint16_t               | `uint16_t myUInt16;`              | 16          | 0 to 65,535 (unsigned)                              |
| int32_t                | `int32_t myInt32;`                | 32          | -2,147,483,648 to 2,147,483,647 (signed)             |
| uint32_t               | `uint32_t myUInt32;`              | 32          | 0 to 4,294,967,295 (unsigned)                       |
| int64_t                | `int64_t myInt64;`                | 64          | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (signed) |
| uint64_t               | `uint64_t myUInt64;`              | 64          | 0 to 18,446,744,073,709,551,615 (unsigned)          |

!!You need to include the `<stdint.h>` to use the int types.

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

### Input with scanf and the '&' symbol

When using `scanf` to input values, use the `&` symbol before the variable to store the entered value at the address of the variable.

```c
int age;
printf("Enter your age: ");
scanf("%d", &age);
```

### Declarations and Assignments

```c
int number = 42;
float pi = 3.14;
char letter = 'A';
