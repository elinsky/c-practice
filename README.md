# The C Programming Language (K&R)

Working through the second edition by Kernighan & Ritchie.

## Progress

<details open>
<summary><b>Chapter 1: A Tutorial Introduction</b></summary>

### Example Programs
- [x] 1.1 Getting Started - `kr/ch1/hello_world.c`
- [x] 1.2 Variables and Arithmetic - `kr/ch1/fahr_celsius.c`
- [x] 1.3 The For Statement - `kr/ch1/fahr_celsius_for.c`
- [x] 1.4 Symbolic Constants - `kr/ch1/fahr_celsius_symbolic.c`
- [ ] 1.5.1 File Copying - `kr/ch1/file_copy.c`
- [ ] 1.5.2 Character Counting - `kr/ch1/char_count.c`
- [ ] 1.5.3 Line Counting - `kr/ch1/line_count.c`
- [ ] 1.5.4 Word Counting - `kr/ch1/word_count.c`
- [ ] 1.6 Arrays - `kr/ch1/digit_count.c`
- [ ] 1.7 Functions - `kr/ch1/power_function.c`
- [ ] 1.8 Arguments - Call by Value - `kr/ch1/power_function_v2.c`
- [ ] 1.9 Character Arrays - `kr/ch1/longest_line.c`
- [ ] 1.10 External Variables and Scope - `kr/ch1/longest_line_external.c`

### Exercises
- [ ] 1-1: Run hello world, experiment with leaving out parts - `kr/ch1/ex1-1.c`
- [ ] 1-2: Experiment with `\c` escape sequences - `kr/ch1/ex1-2.c`
- [x] 1-3: Modify temperature conversion to print heading - `kr/ch1/ex1-3.c`
- [x] 1-4: Write Celsius to Fahrenheit conversion - `kr/ch1/ex1-4.c`
- [x] 1-5: Reverse temperature table (300 to 0) - `kr/ch1/ex1-5.c`
- [ ] 1-6: Verify `getchar() != EOF` is 0 or 1 - `kr/ch1/ex1-6.c`
- [ ] 1-7: Print value of EOF - `kr/ch1/ex1-7.c`
- [ ] 1-8: Count blanks, tabs, and newlines - `kr/ch1/ex1-8.c`
- [ ] 1-9: Copy input to output, replace multiple blanks with single blank - `kr/ch1/ex1-9.c`
- [ ] 1-10: Copy input to output, make tabs/backspaces/backslashes visible - `kr/ch1/ex1-10.c`
- [ ] 1-11: Test word counting program - `kr/ch1/ex1-11.c`
- [ ] 1-12: Print input one word per line - `kr/ch1/ex1-12.c`
- [ ] 1-13: Print histogram of word lengths (horizontal) - `kr/ch1/ex1-13.c`
- [ ] 1-14: Print histogram of character frequencies - `kr/ch1/ex1-14.c`
- [ ] 1-15: Rewrite temperature conversion with function - `kr/ch1/ex1-15.c`
- [ ] 1-16: Revise `longest_line.c` to handle arbitrarily long lines - `kr/ch1/ex1-16.c`
- [ ] 1-17: Print lines longer than 80 characters - `kr/ch1/ex1-17.c`
- [ ] 1-18: Remove trailing blanks and tabs, delete blank lines - `kr/ch1/ex1-18.c`
- [ ] 1-19: Write `reverse(s)` function to reverse string `s` - `kr/ch1/ex1-19.c`
- [ ] 1-20: Write `detab` to replace tabs with spaces - `kr/ch1/ex1-20.c`
- [ ] 1-21: Write `entab` to replace spaces with tabs - `kr/ch1/ex1-21.c`
- [ ] 1-22: Fold long input lines (break before column n) - `kr/ch1/ex1-22.c`
- [ ] 1-23: Remove all comments from C program - `kr/ch1/ex1-23.c`
- [ ] 1-24: Check C program for rudimentary syntax errors - `kr/ch1/ex1-24.c`

</details>

<details>
<summary><b>Chapter 2: Types, Operators, and Expressions</b></summary>

### Example Programs
- [ ] 2.1 Variable Names
- [ ] 2.2 Data Types and Sizes
- [ ] 2.3 Constants
- [ ] 2.7 Type Conversions - `kr/ch2/lower.c`
- [ ] 2.8 Increment/Decrement - `kr/ch2/squeeze.c`
- [ ] 2.8 Bitwise Operators - `kr/ch2/getbits.c`
- [ ] 2.9 Assignment Operators - `kr/ch2/bitcount.c`

### Exercises
- [ ] 2-1: Determine ranges of `char`, `short`, `int`, `long` - `kr/ch2/ex2-1.c`
- [ ] 2-2: Write loop equivalent to `for` without `&&` or `||` - `kr/ch2/ex2-2.c`
- [ ] 2-3: Write `htoi(s)` to convert hex string to integer - `kr/ch2/ex2-3.c`
- [ ] 2-4: Write `squeeze(s1,s2)` to delete chars in `s2` from `s1` - `kr/ch2/ex2-4.c`
- [ ] 2-5: Write `any(s1,s2)` to return first location in `s1` of any char from `s2` - `kr/ch2/ex2-5.c`
- [ ] 2-6: Write `setbits(x,p,n,y)` to set n bits of x at position p to bits from y - `kr/ch2/ex2-6.c`
- [ ] 2-7: Write `invert(x,p,n)` to invert n bits of x starting at position p - `kr/ch2/ex2-7.c`
- [ ] 2-8: Write `rightrot(x,n)` to rotate x right by n bit positions - `kr/ch2/ex2-8.c`
- [ ] 2-9: Explain `x &= (x-1)` deletes rightmost 1-bit in x - `kr/ch2/ex2-9.c`
- [ ] 2-10: Rewrite `lower(c)` with conditional expression instead of if-else - `kr/ch2/ex2-10.c`

</details>

<details>
<summary><b>Chapter 3: Control Flow</b></summary>

### Example Programs
- [ ] 3.3 Binary Search - `kr/ch3/binsearch.c`
- [ ] 3.5 Shell Sort - `kr/ch3/shellsort.c`
- [ ] 3.6 Reverse - `kr/ch3/reverse.c`
- [ ] 3.6 itoa - `kr/ch3/itoa.c`
- [ ] 3.6 atoi - `kr/ch3/atoi.c`
- [ ] 3.7 trim - `kr/ch3/trim.c`

### Exercises
- [ ] 3-1: Modify `binsearch` with only one test inside the loop - `kr/ch3/ex3-1.c`
- [ ] 3-2: Write `escape(s,t)` to convert newline/tab to visible escapes - `kr/ch3/ex3-2.c`
- [ ] 3-3: Expand `expand(s1,s2)` to handle ranges like `a-z` - `kr/ch3/ex3-3.c`
- [ ] 3-4: Handle largest negative number in `itoa` - `kr/ch3/ex3-4.c`
- [ ] 3-5: Write `itob(n,s,b)` to convert n to base b representation - `kr/ch3/ex3-5.c`
- [ ] 3-6: Modify `itoa` to accept width parameter for padding - `kr/ch3/ex3-6.c`

</details>

<details>
<summary><b>Chapter 4: Functions and Program Structure</b></summary>

### Example Programs
- [ ] 4.1 Pattern Searching - `kr/ch4/grep.c`
- [ ] 4.2 atof - `kr/ch4/atof.c`
- [ ] 4.3 Reverse Polish Calculator - `kr/ch4/calc/`
- [ ] 4.11 Recursive quicksort - `kr/ch4/qsort.c`

### Exercises
- [ ] 4-1: Write `strrindex(s,t)` to return rightmost position of t in s - `kr/ch4/ex4-1.c`
- [ ] 4-2: Extend `atof` to handle scientific notation - `kr/ch4/ex4-2.c`
- [ ] 4-3: Extend calculator to handle modulus and negative numbers - `kr/ch4/ex4-3.c`
- [ ] 4-4: Add commands to print top, duplicate, swap, clear stack - `kr/ch4/ex4-4.c`
- [ ] 4-5: Add access to math library functions (sin, cos, exp, pow) - `kr/ch4/ex4-5.c`
- [ ] 4-6: Add commands for variables - `kr/ch4/ex4-6.c`
- [ ] 4-7: Write `ungets(s)` to push back entire string - `kr/ch4/ex4-7.c`
- [ ] 4-8: Modify `getch`/`ungetch` to handle at most one character of pushback - `kr/ch4/ex4-8.c`
- [ ] 4-9: Modify getch/ungetch to handle EOF - `kr/ch4/ex4-9.c`
- [ ] 4-10: Use `getline` instead of `getch`/`ungetch` for calculator - `kr/ch4/ex4-10.c`
- [ ] 4-11: Modify `getop` to not use `ungetch` - `kr/ch4/ex4-11.c`
- [ ] 4-12: Adapt printd to print integer recursively - `kr/ch4/ex4-12.c`
- [ ] 4-13: Write recursive `reverse(s)` - `kr/ch4/ex4-13.c`
- [ ] 4-14: Define macro `swap(t,x,y)` to swap two arguments - `kr/ch4/ex4-14.c`

</details>

<details>
<summary><b>Chapter 5: Pointers and Arrays</b></summary>

### Example Programs
- [ ] 5.2 getint - `kr/ch5/getint.c`
- [ ] 5.4 alloc/afree - `kr/ch5/alloc.c`
- [ ] 5.5 strcpy - `kr/ch5/strcpy.c`
- [ ] 5.5 strcmp - `kr/ch5/strcmp.c`
- [ ] 5.6 Pointer array sort - `kr/ch5/sort_lines.c`
- [ ] 5.7 qsort with function pointers - `kr/ch5/qsort_lines.c`
- [ ] 5.10 expr (command-line calculator) - `kr/ch5/expr.c`
- [ ] 5.11 detab/entab - `kr/ch5/detab.c`
- [ ] 5.12 dcl (C declarations) - `kr/ch5/dcl.c`

### Exercises
- [ ] 5-1: Fix `getint` to handle +/- not followed by digit - `kr/ch5/ex5-1.c`
- [ ] 5-2: Write `getfloat` analog of `getint` - `kr/ch5/ex5-2.c`
- [ ] 5-3: Write pointer version of `strcat` - `kr/ch5/ex5-3.c`
- [ ] 5-4: Write `strend(s,t)` returns 1 if t occurs at end of s - `kr/ch5/ex5-4.c`
- [ ] 5-5: Write pointer versions of `strncpy`, `strncat`, `strncmp` - `kr/ch5/ex5-5.c`
- [ ] 5-6: Rewrite earlier programs using pointers - `kr/ch5/ex5-6.c`
- [ ] 5-7: Rewrite `readlines` to store lines in array supplied by main - `kr/ch5/ex5-7.c`
- [ ] 5-8: Implement error checking in `day_of_year` and `month_day` - `kr/ch5/ex5-8.c`
- [ ] 5-9: Rewrite `day_of_year` and `month_day` with pointers - `kr/ch5/ex5-9.c`
- [ ] 5-10: Write `expr` for reverse Polish expressions from command line - `kr/ch5/ex5-10.c`
- [ ] 5-11: Modify `detab`/`entab` to accept list of tab stops - `kr/ch5/ex5-11.c`
- [ ] 5-12: Extend `entab`/`detab` to accept `-m +n` for columns m to n - `kr/ch5/ex5-12.c`
- [ ] 5-13: Write `tail` to print last n lines (default 10) - `kr/ch5/ex5-13.c`
- [ ] 5-14: Modify sort to handle `-r` reverse sort - `kr/ch5/ex5-14.c`
- [ ] 5-15: Add `-f` fold upper/lower case, `-d` directory order - `kr/ch5/ex5-15.c`
- [ ] 5-16: Add `-d` (directory order) option - `kr/ch5/ex5-16.c`
- [ ] 5-17: Add field handling to sort - `kr/ch5/ex5-17.c`
- [ ] 5-18: Make `dcl` handle errors - `kr/ch5/ex5-18.c`
- [ ] 5-19: Modify `undcl` to handle errors - `kr/ch5/ex5-19.c`
- [ ] 5-20: Expand `dcl` to handle declarations with function argument types - `kr/ch5/ex5-20.c`

</details>

<details>
<summary><b>Chapter 6: Structures</b></summary>

### Example Programs
- [ ] 6.1 Point structures - `kr/ch6/point.c`
- [ ] 6.2 makepoint/addpoint - `kr/ch6/point_ops.c`
- [ ] 6.3 Rectangle operations - `kr/ch6/rect.c`
- [ ] 6.5 Word frequency counter - `kr/ch6/wordfreq.c`
- [ ] 6.6 Table lookup - `kr/ch6/table.c`

### Exercises
- [ ] 6-1: Modify `getword` to handle underscores, strings, comments, preprocessor - `kr/ch6/ex6-1.c`
- [ ] 6-2: Write program to print variables in groups (first 6 chars determine group) - `kr/ch6/ex6-2.c`
- [ ] 6-3: Write cross-referencer that prints line numbers where each word occurs - `kr/ch6/ex6-3.c`
- [ ] 6-4: Write program to print distinct words with occurrence counts - `kr/ch6/ex6-4.c`
- [ ] 6-5: Write `undef` to remove name and definition from table - `kr/ch6/ex6-5.c`
- [ ] 6-6: Implement simple #define processor - `kr/ch6/ex6-6.c`

</details>

<details>
<summary><b>Chapter 7: Input and Output</b></summary>

### Example Programs
- [ ] 7.1 Lower case conversion - `kr/ch7/lower.c`
- [ ] 7.2 cat - `kr/ch7/cat.c`
- [ ] 7.4 minprintf - `kr/ch7/minprintf.c`
- [ ] 7.6 File comparison - `kr/ch7/filecomp.c`
- [ ] 7.8.5 Storage allocator - `kr/ch7/malloc.c`

### Exercises
- [ ] 7-1: Modify case conversion to handle upper/lower based on program name - `kr/ch7/ex7-1.c`
- [ ] 7-2: Print arbitrary input sensibly (hex for non-graphic chars) - `kr/ch7/ex7-2.c`
- [ ] 7-3: Revise `minprintf` to handle more printf facilities - `kr/ch7/ex7-3.c`
- [ ] 7-4: Write `minscanf` analog of `minprintf` - `kr/ch7/ex7-4.c`
- [ ] 7-5: Postfix calculator using scanf/printf - `kr/ch7/ex7-5.c`
- [ ] 7-6: Compare two files, print first line where they differ - `kr/ch7/ex7-6.c`
- [ ] 7-7: Modify pattern finding program to take input from files or stdin - `kr/ch7/ex7-7.c`
- [ ] 7-8: Print file contents with page breaks, headers, page numbers - `kr/ch7/ex7-8.c`
- [ ] 7-9: Rewrite fsize using standard library instead of syscalls - `kr/ch7/ex7-9.c`

</details>

<details>
<summary><b>Chapter 8: The UNIX System Interface</b></summary>

### Example Programs
- [ ] 8.2 getchar/putchar - `kr/ch8/getchar.c`
- [ ] 8.3 open, creat, close, unlink - `kr/ch8/fileops.c`
- [ ] 8.5 fsize - `kr/ch8/fsize.c`
- [ ] 8.6 malloc - `kr/ch8/malloc.c`

### Exercises
- [ ] 8-1: Rewrite cat from Chapter 7 using syscalls - `kr/ch8/ex8-1.c`
- [ ] 8-2: Rewrite fopen/fillbuf with bit fields instead of explicit bit operations - `kr/ch8/ex8-2.c`
- [ ] 8-3: Design/implement `_flushbuf`, `fflush`, `fclose` - `kr/ch8/ex8-3.c`
- [ ] 8-4: Implement library version of `fseek` - `kr/ch8/ex8-4.c`
- [ ] 8-5: Modify `fsize` to print i-node information - `kr/ch8/ex8-5.c`
- [ ] 8-6: Implement standard library `calloc` and `free` - `kr/ch8/ex8-6.c`
- [ ] 8-7: Write `malloc` that checks for errors (orphaned blocks, valid pointers, etc.) - `kr/ch8/ex8-7.c`
- [ ] 8-8: Write `bfree(p,n)` to free arbitrary block of n characters - `kr/ch8/ex8-8.c`

</details>

---

**Repository Structure**: `kr/ch{N}/` - One directory per chapter
