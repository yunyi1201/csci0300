# Warning Flags
1. -Wall 
    1. Uninitialized and unused variables
    2. incorrect return types
    3. invalid type comparisons
2. -Werror 
    the **Werror**flag forces the compiler to treat all compiler warning as errors.


**Debugging with Sanitizers**: The warning flags don't catch all errors. For example, memory leaks, stack or heap corruption, and cases of undefined behavior are often not detected by compiler.

3. -fsanitize = address 
    the flag enables the AddressSanitizer program, which is a memory error detector developed by google.
4. -fsanitize = undefined 
   the flag enables the UndefinedBehaviorSanitizer program.

   