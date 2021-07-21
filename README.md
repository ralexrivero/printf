# printf - custom function
### version 0.1
## Content
A custom version of printf function, originally included in the library ``stdio.h``

## Introduction to the project
printf() function is **used to print the (“character, string, float, integer, octal and hexadecimal values”)** onto the standard output.

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
Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Cases
|          Placeholder     |Code|Output|
|----------------|-------------------------------|-----------------------------|
|%%|`printf("%%")`            |%            |
|%llf|`printf("value is: %llf")`            |3,48e-308
|%s|`printf("Name: %s")`|Mariano|



```mermaid
graph LR
A[printf] -- placeholder --> B((Number))
A --> C(literal string)
B --> D{Integer?}
C --> D
D --> E[standard output]
```
## Precision
### with
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.
###  height
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.

---

## Repository files
| file | description |type |
|--|--|--|--|
| _putchar.c | putchar |prototype
| holberton.h | include |header

## Compilation

``gcc -Wall -Werror -Wextra -pedantic *.c``

# Wiki

## Authors
``Diego Guarise`` & ``Ronald Rivero``


About authors
Diego 

<br>
<a href="https://github.com/Diego-Guarise" target="_blank"> <img align="left" alt="Diego Guarise | Github" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/github-icon.svg" /> </a>
<a href="https://www.linkedin.com/in/diego-guarise/" target="_blank"> <img align="left" alt="Diego Guarise | LinkedIn" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/linkedin-brands_blue.svg" /> </a>
<a href="mailto:l.guariselopez@gmail.com?subject=Contact" target="_blank"><img align="left" width="22" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/envelope-regular_blue.svg" alt="email me"> </a>
<br>

Ronald

<br>
<a href="https://github.com/ralexrivero" target="_blank"> <img align="left" alt="Ronald Rivero | Github" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/github-icon.svg" /> </a>
<a href ="https://discord.gg/4QNsYMAa4t" target="_blank" rel="noreferrer noopener"> <img align="left" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/discord-brands_blue.svg" alt="Ronald Rivero | Discord" width="22px"> </a>
<a href="https://twitter.com/ralex_uy" target="_blank"> <img align="left" alt="Ronald Rivero | Twitter" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/twitter-square-brands_blue.svg" /> </a>
<a href="https://www.linkedin.com/in/ronald-rivero/" target="_blank"> <img align="left" alt="Ronald Rivero | LinkedIn" width="22px" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/linkedin-brands_blue.svg" /> </a>
<a href="mailto:ralexrivero@gmail.com?subject=Contact" target="_blank"><img align="left" width="22" src="https://raw.githubusercontent.com/ralexrivero/xelar_theme_profile/main/icons/envelope-regular_blue.svg" alt="email me"> </a>
<br>
