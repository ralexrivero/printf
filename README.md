# printf - custom function

```version 1.1```  `[release date:]: # Date: 2020-07-24`

```bash
                      ███              █████       ██████
                     ░░░              ░░███       ███░░███
 ████████  ████████  ████  ████████   ███████    ░███ ░░░
░░███░░███░░███░░███░░███ ░░███░░███ ░░░███░    ███████
 ░███ ░███ ░███ ░░░  ░███  ░███ ░███   ░███    ░░░███░
 ░███ ░███ ░███      ░███  ░███ ░███   ░███ ███  ░███
 ░███████  █████     █████ ████ █████  ░░█████   █████
 ░███░░░  ░░░░░     ░░░░░ ░░░░ ░░░░░    ░░░░░   ░░░░░
 ░███
 █████
░░░░░
```

## Content

## Introduction to the project

```printf()``` function is *used to print the character, string, float, integer, octal and hexadecimal values* to the standard output.

Printf function prints formatted text to the standard output, and returns the number of characters printed. It is a very powerful function, and it is used to print the values of variables, and to print the values of the expressions.
The printf function identify the placeholder and return the value passed.

## Evironment

<div >
 <a href="https://www.cprogramming.com/" target="_blank"><img height="48px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/language_c-programming.svg" alt="C programming language" ></a>
 <a href="https://ubuntu.com/" target="_blank"><img height="48px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/ubuntu-icon.svg" alt="C programming language"></a>
 <a href="https://www.vim.org/" target="_blank"><img height="48px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/Vimlogo.svg" alt="C programming language"></a>
</div>

* Language: C
* OS: Ubuntu 20.04 LTS
* Editor: VIM 8.1.2269
* Compiler: gcc 9.3.0
* -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

### Specifiers

Specifier characters at the end define the type and the interpretation of its corresponding argument:

| Specifier  | Output          |
|------------|-----------------|
| `c`        | character       |
| `s`        | string          |
| `%`        | %               |
| `d` or `i` | Signed integer  |
| `R`        | Rot translation |
| `r`        | string reverse  |
| `b`        | Binary convertion |
| `o`        | octal convertion |
| `u`        | unsigned convertion|

## Repository files

| *Name*      | **Description**          |
|--------------|--------------------------|
| `holberton.h`  | includes prototypes and structres |
| `_printf.c`    | main function |
| `p_*.c` | custom function, one per function |
| `_putchar.c` | emulates the putchar function |
| `man_3_printf` | man page |

## Install

To install execute in terminal the following command:

```bash
$ git clone https://github.com/ralexrivero/printf.git
Cloning into 'printf'...
remote: Enumerating objects: 1004, done.
remote: Counting objects: 100% (341/341), done.
remote: Compressing objects: 100% (246/246), done.
remote: Total 1004 (delta 208), reused 212 (delta 95), pack-reused 663
Receiving objects: 100% (1004/1004), 261.72 KiB | 638.00 KiB/s, done.
Resolving deltas: 100% (618/618), done.
```

To compile execute in terminal the ```make``` command folowing of any of the targets:

* `all`: compile all files
* `full`: test wide use cases with special output
* `binary`: test binary function
* `hexa`: test hexadecimal function
* `octal`: test octal function
* `reverse`: test reverse function
* `rot`: test rot function
* `unsigned`: test unsigned function
* `char`: test char function
* `string`: test string function
* `special`: test special function
* `fclean`: clean all executable files

Example of use:

```bash
$ make all
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c test/main.c -o printf
```

Execute the program:

```bash
$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[%p]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[
]FF300008 ,ff300
]0f145736eff
]%
]21[:neL]
Unknown:[%r]
```

## Test

Test folder contain the main failes to test the functions.

## Examples

_printf functions examples:

```bash
_printf("char: [%c]\n", 'H');
char: [H]
```

```bash
printf("string: [%s]\n", "Hello people !");
Output: string: [Hello people !]
```

```bash
_printf("integer: [%i]\n", 26);
Output: integer: [26]
```

```bash
_printf("decimal: [%d]\n", 10000);
Output: decimal: [10000]
```

```bash
_printf("octal [%o]\n", 92);
Output: octal [134]
```

```bash
_printf("Percent: [%%%%]\n");
Output: Percent: [%%]
```

```bash
_printf("Reverse: [%r]\n", "Programming is great!");
Output: Reverse: [!taerg si gnimmargorP]
```

## Manual

To get help about the printf function ask the manual pages on the terminal:

````bash
$ man ./man_3_printf

````

## Flowchart

<br>
<div>
<img align="left" alt="_printf flowchart" width="100%" src="https://raw.githubusercontent.com/ralexrivero/printf/main/printf.svg" />
</div>
<br>

***

## About authors

> ```Diego```

<div>
<a href="https://www.linkedin.com/in/diego-guarise/" target="_blank"> <img align="left" alt="Diego Guarise | LinkedIn" src="https://img.shields.io/badge/LinkedIn-follow-blue?style=social&logo=linkedin"/> </a>

<a href="https://github.com/Diego-Guarise/" target="_blank"> <img align="left" src="https://img.shields.io/github/followers/Diego-Guarise?style=social" alt="Diego-Guarise | Github"> </a>
</br>
</div>

> ```Ronald```

<div>
<a href="https://twitter.com/ralex_uy" target="_blank"> <img align="left" alt="Ronald Rivero | Twitter" src="https://img.shields.io/twitter/follow/ralex_uy?style=social"/> </a>

<a href="https://www.linkedin.com/in/ronald-rivero/" target="_blank">  <img align="left" alt="Ronald Rivero | LinkedIn" src="https://img.shields.io/badge/LinkedIn-+20K-blue?style=social&logo=linkedin"/> </a>

<a href="https://github.com/ralexrivero/" target="_blank">  <img align="left" src="https://img.shields.io/github/followers/ralexrivero?style=social" alt="Ralex | Github"> </a>
</br>
</div>

> ```Joaquin```

<div>
<a href="https://twitter.com/tatinfa" target="_blank">  <img align="left" alt="Joaquin Pintaluba | Twitter" src="https://img.shields.io/twitter/follow/tatinfa?style=social"/> </a>

<a href="https://www.linkedin.com/in/joaquín-pintaluba-7191991a3" target="_blank"> <img align="left" alt="Joaquin Pintaluba | LinkedIn" src="https://img.shields.io/badge/LinkedIn-follow-blue?style=social&logo=linkedin"/> </a>

<a href="https://github.com/jopinta" target="_blank"> <img align="left" src="https://img.shields.io/github/followers/jopinta?style=social" alt="Jopinta | Github"> </a>
</br>
</div>
