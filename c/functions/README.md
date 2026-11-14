# Functions

Exercises from [w3resource - C functions](https://www.w3resource.com/c-programming-exercises/function/index.php).

| File | Problem | Notes |
|------|---------|-------|
| [simple_function.c](simple_function.c) | Show the simple structure of a function: prototype, call from `main()`, and definition. | Extended to read two numbers from the user and print their sum. Uses `typedef signed int s32`, which assumes a 32-bit `int`. |
| [square_calculation.c](square_calculation.c) | Find the square of a number using a function. | 16-bit input, 32-bit unsigned result, so the multiplication can't overflow. I check the return value of `scanf` to detect non-numeric input, then print "Invalid input" and return 1. Input outside (-32768 to 32767) is not detected (`scanf` behavior is undefined there). |
| [swap_numbers.c](swap_numbers.c) | Swap two numbers using a function. | Pointers (call by reference); the function returns an error state if either pointer is `NULL`. |