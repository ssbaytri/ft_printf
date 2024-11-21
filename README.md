<div align="center">
  <img src="https://drive.google.com/uc?id=14qoePZpzJNUWPCoepJ_Mmi8vrnd1xJAE" alt="Ft_Printf Header" width="100%">
</div>


<div align="center">
<h1>ft_printf 🖨️</h1>  
![42 Logo](https://img.shields.io/badge/42-Libft-blueviolet)
[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)

</div>

## Project Description

`ft_printf` is a custom implementation of the standard C library's `printf()` function, developed as part of the 42 School curriculum. This project focuses on understanding variadic functions in C and creating a flexible, extensible printing utility.

## Features

### Mandatory Conversions
The project supports the following format specifiers:
- `%c`: Print a single character
- `%s`: Print a string
- `%p`: Print a pointer address in hexadecimal
- `%d`: Print a decimal (base 10) number
- `%i`: Print an integer
- `%u`: Print an unsigned decimal number
- `%x`: Print a number in lowercase hexadecimal
- `%X`: Print a number in uppercase hexadecimal
- `%%`: Print a percent sign

### Bonus Flags Implemented
- `#`: Alternative form flag
- ` `: Space flag
- `+`: Sign flag

## Requirements

- C Compiler (gcc/cc)
- Make

## Compilation

### Mandatory Part
```bash
make
```

### Bonus Part
```bash
make bonus
```

## Usage Example

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s! Number: %d\n", "World", 42);
    return 0;
}
```

## Project Structure

```
.
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_putun.c
├── ft_puthex.c
├── ft_putp.c
├── bonus/
│   ├── ft_printf_bonus.c
│   ├── ft_printf_bonus.h
│   ├── ft_putchar_bonus.c
│   ├── ft_putstr_bonus.c
│   ├── ft_putnbr_bonus.c
│   ├── ft_putun_bonus.c
│   ├── ft_puthex_bonus.c
│   └── ft_putp_bonus.c
```

## Learning Outcomes

- Implementing variadic functions
- Memory management
- Working with variable argument lists
- Handling different data type conversions

## Limitations

- Does not implement full buffer management of the original `printf()`
- Bonus features are selective (not all possible flags implemented)

## License

This project is part of the 42 School curriculum and follows its project guidelines.

## Acknowledgments

- 42 School for the project challenge
- The C standard library `printf()` implementation for inspiration
