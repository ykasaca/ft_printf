*This project has been created as part of the 42 curriculum by yukasaca.*

---


# ft_printf

## Description

`ft_printf` is a custom implementation of the C standard library function `printf()`.  
The goal of this project is to recreate formatted output handling using variadic functions while respecting strict memory management and performance constraints.

This project is delctiivered as a static library: `libftprintf.a`, designed to be reused in future C projects.

### Implemented conversions

| Specifier | Description |
|----------|------------|
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer address in hexadecimal |
| `%d` | Signed decimal |
| `%i` | Signed integer |
| `%u` | Unsigned decimal |
| `%x` | Hexadecimal (lowercase) |
| `%X` | Hexadecimal (uppercase) |
| `%%` | Percent sign |

Buffer management from the original `printf` is intentionally not implemented.

---

## Instructions

### Build the library

```bash
make
```
##### This generates:

```sh
libftprintf.a
```

### Clean Object Files:

```sh
make clean
```

#### Full Clean Up:

```sh
make fclean
```
#### Rebuild:

```sh
make re
```
---

## Usage :

#### Include the header:

```c
#include "ft_printf.h"
```

#### Compile With:

```bash
cc main.c libftprintf.a
```

#### Example:

```c
ft_printf("Value: %d | Hex: %x | Ptr: %p\n", 42, 42, &var);
```
---

## Resources

- GNU libc printf documentation  
  https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html  

- Variadic functions in C (cppreference)  
  https://en.cppreference.com/w/c/variadic  

- 42 ft_printf subject (official)
- 

---

## AI usage

AI tools were used as a learning and debugging assistant, specifically for:

- Understanding variadic function mechanics (`va_list`, `va_arg`, etc.)
- Analyzing edge cases and undefined behaviors
- Debugging logical errors during implementation
- Validating output consistency with the original `printf`

All architectural decisions, algorithms, and final code structure were implemented manually.
AI was not used to generate full solutions or complete functions.
