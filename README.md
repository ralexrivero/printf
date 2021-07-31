# printf - custom function
### version 1.0
## Content

## Introduction to the project
printf() function is **used to print the (“character, string, float, integer, octal and hexadecimal values, ...”)** onto the standard output.

Print formatted text
Return number of characters printed
the _printf function identify the placeholder and return the value passed


## Evironment
<div >
  <a href="https://www.cprogramming.com/" target="_blank"><img height="48px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/language_c-programming.svg" alt="C programming language" ></a>
  <a href="https://ubuntu.com/" target="_blank"><img height="48px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/ubuntu-icon.svg" alt="C programming language"></a>
    <a href="https://www.vim.org/" target="_blank"><img height="48px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/Vimlogo.svg" alt="C programming language"></a>
</div>


- Language: C
- OS: Ubuntu 20.04 LTS
- Editor: VIM 8.1.2269
- Compiler: gcc 9.3.0
- Wall -Werror -Wextra -pedantic -std=gnu89
- Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Project specifitacation

- No allowed to use global variable
- No more than 5 functions per file
- All files end with a new line

<h3>Specifiers </h3>
Specifier characters at the end define the type and the interpretation of its corresponding argument:

| Specifier  | Output          |
|------------|-----------------|
| `c`        | character       |
| `s`        | string          |
| `d` or `i` | Signed integer  |
| `R`        | Rot translation |
| `r`        | string reverse  |
| `%`        | %               |

## Repository files

| **Name**     | **Description**          |
|--------------|--------------------------|
| `holberton.h`  | includes prototypes and structres |
| `_printf.c`    | main function |
| `p_pro_00.c` | custom function |
| `p_pro_01.c` | custom functions |
| `p_pro_02.c`    | custom function |
| `_putchar.c` | emulates the putchar funtion |
| `man_3_printf` | man page |

## Install
To install execute in terminal
git clone https://github.com/ralexrivero/printf.git
then with a compilation program like gcc use de command above

## Compilation

``gcc -Wall -Werror -Wextra -pedantic *.c``

## Main

The repository includes a main with test functions

##### EXAMPLES #####
_printf functions examples:

- _printf("char: [%c]\n", 'H');
  + Output: char: [H]

- _printf("string: [%s]\n", "Hello people !");
  + Output: string: [Hello people !]

- _printf("integer: [%i]\n", 26);
  + Output: integer: [26]

- _printf("decimal: [%d]\n", 10000);
  + Output: decimal: [10000]

- _printf("octal [%o]\n", 92);
  + Output: octal [134]

- _printf("Percent: [%%%%]\n");
  + Output: Percent: [%%]

- _printf("Reverse: [%r]\n", "Programming is great!");
  + Output: Reverse: [!taerg si gnimmargorP]
 
### Manual ###
To review the _printf function manual execute in your terminal:

$ man ./man_3_printf

# Flowchart

<br>
<div>
<img align="left" alt="_printf flowchart" width="100%" src="https://raw.githubusercontent.com/ralexrivero/printf/main/printf.svg" />
</div>
<br>


## About authors
``Diego Guarise`` & ``Ronald Rivero`` & ``Joaquin Pintaluba``


###### Diego 


<br>
<a href="https://github.com/Diego-Guarise" target="_blank"> <img align="left" alt="Diego Guarise | Github" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/github-icon.svg" /> </a>
<a href="https://www.linkedin.com/in/diego-guarise/" target="_blank"> <img align="left" alt="Diego Guarise | LinkedIn" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/linkedin-brands_blue.svg" /> </a>
<a href="mailto:l.guariselopez@gmail.com?subject=Contact" target="_blank"><img align="left" width="22" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/envelope-regular_blue.svg" alt="email me"> </a>
<br>


###### Ronald


<br>
<a href="https://github.com/ralexrivero" target="_blank"> <img align="left" alt="Ronald Rivero | Github" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/github-icon.svg" /> </a>
<a href ="https://discord.gg/4QNsYMAa4t" target="_blank" rel="noreferrer noopener"> <img align="left" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/discord-brands_blue.svg" alt="Ronald Rivero | Discord" width="22px"> </a>
<a href="https://twitter.com/ralex_uy" target="_blank"> <img align="left" alt="Ronald Rivero | Twitter" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/twitter-square-brands_blue.svg" /> </a>
<a href="https://www.linkedin.com/in/ronald-rivero/" target="_blank"> <img align="left" alt="Ronald Rivero | LinkedIn" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/linkedin-brands_blue.svg" /> </a>
<a href="mailto:ralexrivero@gmail.com?subject=Contact" target="_blank"><img align="left" width="22" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/envelope-regular_blue.svg" alt="email me"> </a>
<br>


###### Joaquin


<br>
<a href="https://github.com/jopinta" target="_blank"> <img align="left" alt="Joaquin Pintaluba | Github" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/github-icon.svg" /> </a>

<a href="https://twitter.com/tatinfa" target="_blank"> <img align="left" alt="Joaquin Pintaluba | Twitter" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/twitter-square-brands_blue.svg" /> </a>
<a href="https://www.linkedin.com/in/joaquin-pintaluba/" target="_blank"> <img align="left" alt="Joaquin Pintaluba | LinkedIn" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/linkedin-brands_blue.svg" /> </a>
<a href="mailto:ralexrivero@gmail.com?subject=Contact" target="_blank"><img align="left" width="22" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/envelope-regular_blue.svg" alt="email me"> </a>
<br>
