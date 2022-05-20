# Simple shell
In this project, we coded from scratch a simple Unix shell. This shell is an interactive commandline interpreter. This shell that we created utilizes the command line interface (CLI). It allows users to type in a defined set of commands (e.g. "env" to print out the environment, "rm" to remove files, "ls" to list file in the current directory, etc) and have the operating system run the appropriate function. Our shell is a simple version that handles memory leaks very well and has basic functionality. It allows the user to manipulate folders however they want, from writing, reading, etc, print things to the terminal, change directories, print where you are in the system, among others.

# Synopsis
On this Simple Shell repository it holds all the code necessary for our custom simple shell to run. Our shell currently handles the executions of executables found in the environmental variable

# Some allowed functions
access, chdir, close, closedir, execve,exit _exit, signal, malloc, free, getcwd, wait, write.


# Getting started
To use hsh, you can give it commands. The syntax is command name {arguments}

# Shell Usage
- Install

 git clone https://github.com/lindamukami/simple_shell.git
 cd simple_shell

- Compile

To compile: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

- usage: non-interactive mode

./hsh

#Example
- $ hello world
- ./hsh: 1: hello: not found
- $ exit

# Built with
 C Programmming Language

# Authors
1. Linda Mukami.
2. Maranga Moranga.
