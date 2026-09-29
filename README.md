# Task 01 — Loops and Functions

## Project
A simple C program that prints a times table and a star pattern based on the user's input.

## Requirements covered
- Nested loops
- A separate function for each output
- Handles zero and negative inputs
- One `.c` file
- GCC compilation

## Handling zero and negative values
- The times table uses the entered number exactly, including zero or a negative number.
- For a negative input, the absolute value is used as the star-pattern size.
- For input `0`, the program clearly says that a zero-size pattern has no rows.

## How to compile

```bash
gcc task01.c -o task01
```

## How to run

Linux/macOS:
```bash
./task01
```

Windows:
```bash
task01.exe
```

## Files
- `task01.c` — C program
- `README.md` — explanation and run instructions
