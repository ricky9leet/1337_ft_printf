<h1 align="center">🚀 1337 Project: ft_printf</h1>

<p align="center">
  <b><i>Development repository for the 42cursus' ft_printf project</i></b><br>
  For more about 1337 Coding School and its projects, feel free to connect with me on <a href="https://www.linkedin.com/in/tellat-ilyas/"><b>LinkedIn</b></a>.
</p>

<h3 align="center">
  <a href="#-about">📖 About</a>
  <span> · </span>
  <a href="#-useful-links">🔗 Useful Links</a>
</h3>

---

## 🗣️ What is `printf`?

The `printf` function (short for **print formatted**) constructs and displays strings by integrating multiple values based on a specified format.

```c
printf("The value is %d\n", counter);
```

A **format specifier** is a special sequence beginning with `%`, defining how a value should be formatted:

| Specifier | Description |
|-----------|------------|
| `%d` | Signed integer (decimal) |
| `%i` | Signed integer (interprets octal/hex in `scanf`) |
| `%s` | String |
| `%c` | Character |
| `%p` | Memory address (hexadecimal) |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal (lowercase) |
| `%X` | Hexadecimal (uppercase) |
| `%%` | Prints a literal `%` |

### 🔍 Difference Between `%i` and `%d`
In `scanf`:
- `%d` treats `012` as **decimal** `12`
- `%i` interprets `012` as **octal** `10`

---

## ⚙️ Variadic Functions

A **variadic function** allows an undefined number of arguments.

### 📌 `va_list` Structure
```c
typedef struct {
    unsigned int gp_offset;
    unsigned int fp_offset;
    void *overflow_arg_area;
    void *reg_save_area;
} va_list[1];
```
- `reg_save_area` → Pointer to the start of saved registers
- `overflow_arg_area` → Pointer to stack arguments
- `gp_offset` → Offset to next general-purpose register (default: `48`)
- `fp_offset` → Offset to next floating-point register (default: `304`)

#### 🔹 Key Points:
- `va_list` is sometimes just `char*`
- `va_arg(ap, TYPE)` reads memory as `TYPE`
- There's **no way** to determine the length of a `va_list`

### 🔧 Key Macros for `va_list`
| Macro | Description |
|-------|------------|
| `va_start(ap, last)` | Initializes `ap` before use |
| `va_arg(ap, type)` | Retrieves the next argument in the list |
| `va_end(ap)` | Cleans up `va_list` |
| `va_copy(dest, src)` | Copies `va_list` |

---

## 🏗️ Macros in C

A **macro** is a preprocessor directive (`#define`) that replaces code segments with predefined values.

### 🔹 Example
```c
#define PI 3.14
```

### 🔍 Types of Macros
| Type | Description |
|------|------------|
| **Object-like** | Replaces a value or code segment |
| **Function-like** | Acts like a function with arguments |
| **Chain-like** | Uses macros inside other macros |

---

## 📌 Useful Links

📚 **Documentation & References**
- [C++ Reference - printf](http://www.cplusplus.com/reference/cstdio/printf/)
- [MacOS documentation - printf](https://opensource.apple.com/source/xnu/xnu-201/osfmk/kern/printf.c.auto.html)
- [C Reference - Register](https://www.geeksforgeeks.org/understanding-register-keyword/)
- [C Microsoft Documentation - Variadic Functions](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170)

🛠 **Technical Articles & Papers**
- [Secrets of printf (PDF)](https://www.cypress.com/file/54441/download)
- [How does printf work?](https://stackoverflow.com/questions/23104628/technically-how-do-variadic-functions-work-how-does-printf-work)
- [Variadic Function in C](https://medium.com/swlh/variadic-function-in-c-programming-d3632315a48e)
- [Printing Floating-Point Numbers](http://www.ryanjuckett.com/programming/printing-floating-point-numbers/)

Happy coding! 🚀

