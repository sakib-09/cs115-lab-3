# CS 115 Lab 3 — Pointers in C++

Working with pointers and dynamic memory: a `Student` struct holds a dynamically allocated array of marks, with input/print helpers that operate through pointers.

## Files
- `pointers.cpp` — main program (struct, `inputStudent`, `printStudent`)
- `Makefile` — build with `make`, clean with `make clean`

## What I learned
- Raw pointers and the `->` operator
- Dynamic array allocation with `new[]` / `delete[]`
- Passing pointers to functions to mutate caller-owned data

## How to run
```bash
make        # builds ./main
./main
make clean  # removes the binary
```
