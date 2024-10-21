In C, a **function prototype** is a declaration of a function that specifies the function's name, return type, and parameters (if any) but does not include the function body. It serves as a "preview" of the function to the compiler, allowing the compiler to ensure that the function is used correctly before it's defined or called in the code.

### Key Points of a Function Prototype:
1. **Function Name**: The name of the function.
2. **Return Type**: The type of value the function returns (e.g., `int`, `float`, `void`, etc.).
3. **Parameters**: The number and type of parameters the function takes (if any). If the function does not take any parameters, `void` is specified.

### Syntax of a Function Prototype:
```c
return_type function_name(parameter_type1, parameter_type2, ...);
```

### Example:
```c
int add(int, int); // Function prototype
```

This prototype tells the compiler:
- The function `add` returns an integer (`int`).
- It takes two integer parameters.

### Purpose of a Function Prototype:
- **Type checking**: It ensures that any calls to the function match the expected types for both the return value and the parameters.
- **Forward declaration**: The function can be used in the code before its actual definition (i.e., the full function implementation can appear later in the code).
  
### Example with Full Function:
```c
#include <stdio.h>

// Function prototype
int add(int, int);

int main() {
    int result;
    result = add(5, 3); // Function call
    printf("The sum is: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
```

### Key Differences Between Function Prototype and Definition:
- **Prototype**: Declares the function's signature (name, return type, and parameters) without the actual code for what the function does.
- **Definition**: Includes the actual code for the function (i.e., the function body).

In the example above:
- `int add(int, int);` is the **prototype**.
- `int add(int a, int b) { return a + b; }` is the **definition**.

### Why Use Function Prototypes?
- **Code Organization**: Allows you to place function definitions after the `main()` function or in separate files while still being able to use the function in your code.
- **Avoid Implicit Declarations**: If a function is called without a prior declaration, the compiler may assume an implicit declaration, which can lead to bugs if the function parameters or return type are incorrect.

Function prototypes are essential for writing modular and maintainable C programs.




