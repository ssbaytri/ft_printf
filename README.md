<div align="center">
  <img src="https://drive.google.com/uc?id=14qoePZpzJNUWPCoepJ_Mmi8vrnd1xJAE" alt="Ft_Printf Header" width="100%">
</div>

<div align="center">
  <h1>ft_printf</h1>
  <p>A Custom Printf Implementation in C</p>

  ![C](https://img.shields.io/badge/language-C-blue.svg)
  ![42 School](https://img.shields.io/badge/school-42-blue)
  [![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/yourusername/ft_printf)
  [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
</div>

## 📖 Project Overview

`ft_printf` is an advanced reimplementation of the standard C library's `printf()` function, developed as part of the 42 School curriculum. This project demonstrates deep understanding of variadic functions, memory management, and complex string formatting in C.

## ✨ Key Features

### Supported Conversion Specifiers
| Specifier | Description |
|-----------|-------------|
| `%c` | Single character printing |
| `%s` | String printing |
| `%p` | Pointer address in hexadecimal |
| `%d` | Decimal (base 10) number |
| `%i` | Integer printing |
| `%u` | Unsigned decimal number |
| `%x` | Lowercase hexadecimal |
| `%X` | Uppercase hexadecimal |
| `%%` | Percent sign |

### Implemented Bonus Flags
- `#`: Alternative form
- ` `: Space flag
- `+`: Sign flag

## 🛠 Installation

### Prerequisites
- GCC or Clang
- GNU Make

### Compilation
```bash
# Compile mandatory part
make

# Compile with bonus flags
make bonus
```

## 💻 Usage Example

```c
#include "ft_printf.h"

int main() {
    // Basic usage
    ft_printf("Hello, %s! Your number is %d\n", "World", 42);
    
    // Bonus flag example
    ft_printf("Signed: %+d, Spaced: % d\n", 42, 42);
    
    return 0;
}
```

## 📂 Project Structure

```
ft_printf/
│
├── Makefile
├── ft_printf.h
├── ft_printf.c
│
├── ft_putchar.c
├── ft_putstr.c
├── ft_putnbr.c
├── ft_putun.c
├── ft_puthex.c
├── ft_putp.c
│
└── bonus/
    │   ├── ft_printf_bonus.c
    │   ├── ft_printf_bonus.h
    │   ├── ft_putchar_bonus.c
    │   ├── ft_putstr_bonus.c
    │   ├── ft_putnbr_bonus.c
    │   ├── ft_putun_bonus.c
    │   ├── ft_puthex_bonus.c
    │   └── ft_putp_bonus.c
```

## 🎓 Learning Outcomes

The project provides hands-on experience in:
- Implementing variadic functions
- Advanced memory management
- Handling variable argument lists
- Complex type conversion and formatting
- Creating extensible C libraries

## ⚠️ Limitations

- No full buffer management like original `printf()`
- Selective bonus flag implementation

## 📄 License

Released under the MIT License. See the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- [42 School](https://www.42.fr/) for the challenging curriculum
- C Standard Library `printf()` implementation

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to check [issues page](https://github.com/yourusername/ft_printf/issues).
