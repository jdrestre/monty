# 0x19. C - Stacks, Queues - LIFO, FIFO

## Description
- Repository to study the following C topics: Stacks, Queues - LIFO and FIFO
---
At the end of this project I could explain to anyone:
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

## Content
### The Monty language
> Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python).
> It relies on a unique stack, with specific instructions to manipulate it.
> The goal of this project is to create an interpreter for Monty ByteCodes files.

---

## Task Project
---
File Name|What does the file do?
---|---
monty.h|header file
push.c|Usage: push <int> - Pushes an element to the stack
pall.c|prints all the values on the stack, starting from the top of the stack.
isnumber.c|checks argv[2] is a number
main.c|main function
error_handling.c|file to handle errors
get_instruc_func.c|add multiple instruccitions for the interpreter
clear_stack.c|stack cleaning
pop.c|function that removes the top element of the stack
pint.c|function that prints the value at the top of the stack, followed by a new line
swap.c|function the opcode swaps the top two elements of stack
add.c|adds the top two elements of the stack.
nop.c|The opcode nop doesnt do anything.