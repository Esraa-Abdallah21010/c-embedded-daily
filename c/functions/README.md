# Functions

Exercises from [w3resource - C functions](https://www.w3resource.com/c-programming-exercises/function/index.php).

| File | Problem | Notes |
|------|---------|-------|
| [simple_function.c](simple_function.c) | Show the simple structure of a function: prototype, call from `main()`, and definition. | Extended to read two numbers from the user and print their sum. Uses `typedef signed int s32`, which assumes a 32-bit `int`. |
| [square_calculation.c](square_calculation.c) | Find the square of a number using a function. | 16-bit input, 32-bit unsigned result, so the multiplication can't overflow. I check the return value of `scanf` to detect non-numeric input. Input outside -32768 to 32767 is not detected (`scanf` behavior is undefined there). |
| [swap_numbers.c](swap_numbers.c) | Swap two numbers using a function. | Pointers (call by reference); the function returns an error state if either pointer is `NULL`. |
| [even_odd_check.c](even_odd_check.c) | Check whether a number is even or odd using a function. | I test `Num % 2 != 0` rather than `== 1`, because in C the remainder takes the sign of the dividend, so `-3 % 2` is -1 and an `== 1` check would wrongly call it even. |
| [series_sum.c](series_sum.c) | Sum the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using a function. | A separate `Factorial` function is called for each term. `u32` holds up to 12!, so larger inputs overflow silently. |
| [decimal_to_binary_conversion.c](decimal_to_binary_conversion.c) | Convert a decimal number to binary using a function (e.g. 65 gives 1000001). | Counts the bits first, then fills the array from the end using shifts, so nothing needs reversing. Returns 0 if the result doesn't fit in the array. |
| [prime_check.c](prime_check.c) | Check whether a number is prime. | 0 and 1 are rejected and 2 is handled as a special case; other numbers are tested by division up to `Num - 1`. Not written as a separate function yet. |
| [largest_element_in_array.c](largest_element_in_array.c) | Find the largest element of an array using a function. | Starts from `Arr[0]` instead of 0 so all-negative arrays work; the count is range-checked (1-32). |