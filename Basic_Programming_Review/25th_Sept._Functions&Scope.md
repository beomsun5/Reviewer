## Function call-by-value

> Definition : **Copying** the actual value of an argument into the function. In this case, changes made to the parameter inside the function have **no effect** on the original value. <u>(= Do not change the original value by the copied value)</u>

```c
#include <stdio.h>
int c_sum(int);

int main(void){
    int n=3, sum;
    printf("%d\n", n);
    sum = c_sum(n);
    printf("%d\n", n);
    printf("%d\n", sum);
    return 0;
}
int c_sum(int n) {
    int sum=0;
    for(;n>0;--n) sum+= n;
    printf("%d\n", n);
    return sum;
}
```

-> 'sum' in main function **!=** 'sum' in 'c_sum' function (Different variable)

-> The value 3 in the variable 'n' of main function is copied to the parameter 'n' of 'c_sum' function

## Recursion

> Definition : The ability of a function to call itself.

-> Very useful when the user wants to write the mathematic equation

ex) f(n) = a + f(n-1)



> Example Code (1)

```c
void r_prn_msg (int k)
{
    if(k > 0) {
        printf("    Have a nice day!\n");
        r_prn_msg(k-1);  //Using a function in it
    }
}
```



> Example Code (2)

```c
#include <stdio.h>
long int factorial(int n)
{
    if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %1d", n, factorial(n));
    return 0;
}
```

-> If n = 3, in 'factorial' function, 3 * factorial(2) is returned and factorial(2) is executed.

-> Then factorial(2) returns 2 * factorial(1) and factorial(1) is executed.

-> Then factorial(1) returns 1 * factorial(0) and factorial(0) is executed.

-> Since n = 0 and 0 < 1, factorial(0) just return 1.



# Storage classes & Scope rules



## Scope rules

> **Region of the program** where only a defined variable **can have its existence** and beyond that variable it cannot be accessed.



- **Local** variables

> Variables that are **declared <u>inside</u> a function or block** are called local variables.

> Can be used only by statements that are <u>**inside**</u> that function or block of code.



☆ Even though the variable name is the same, in the RAM, each of them is **designated differently by their function or block of code.**

![](img/LocalVariable_Example.png)

- **Formal parameter**

```c
#include <stdio.h>
int sum(int a, int b) {      // int a, int b --> formal parameter
    return a+b;
}

int main(void){
    int a = 10, b = 20, c;
    c = sum(a, b);
    printf("%d = %d + %d" c, a, b);
    return 0;
}
```



※ **Formal parameter** is local variable!!



- **Global** variables

> Hold their values throughout the lifetime of the users' program and **they can be accessed inside any of the functions** defined for the program.

> **Defined outside a function**, usually on **top** of the program.

```c
#include <stdio.h>

int main(void) {
    printf("g = %d", g);
    return 0;
}
```

> <u>Use of global variable may cause spaghetti(dirty) code!!</u> (Not Recommeded)

※  Local variable is not initialized by system, **you must initialize it yourself**!!

※  Global variables are <u>initialized automatically</u> by the system when you <u>define them as a 0</u>.



## Storage classes

> Defining the **scope (visibility)** and **life-time of variables** and/or functions within a C Program. (Not that important thing for this lecture)

-> auto, register, static, extern



- auto

-> Default storage class for all **local** variables (can only be used with in functions)

-> Not used many times...



- register (Frankly speaking, I did not understand this concept... **:(** )

-> Define **local variables** that should be stored in a register <u>instead of RAM</u>.

-> Trying to allocate memory in CPU, if it is not possible, allocated to RAM.



§§ Processor register

![](img/processor_register.png)

※ Defining 'register' does not mean that the variable will be stored in a register. It means that <u>it **MIGHT** be stored in a register depending on hardware and implementation restrictions</u>.



- static (for *local* variables)

-> Instructs the compiler to **keep a local variable in existence** during the life-time of the program.

-> Static local variables allow them to **maintain their values between <u>function calls</u>**.

```c
#include <stdio.h>
int func(void){
    static int i = 5; // Just initialize the variable 'i'
    i++;              // at first to 5 and do not initialize once
    return i;         // more when the function 'func' is called 
}                     // again
int main(void){
    int count = 5;
    while(count) {
        count--;
        printf("count = %d, i = %d\n", count, func());
    }
    return 0;
}
```



- static (for *global* variables)

-> Variable's scope to be **restricted to the file** in which it is declared.



- extern

-> Give a **reference** of a global variable that is visible to **ALL the program files**.

-> When you have multiple files and you define a global variable or function, which will **also be used in other files**, then *'extern'* will be **used in another file to provide the reference of defined variable or function**.

```c
#include <stdio.h>
int count = 5;
extern void func(void);  // Get this function from the file above

int main(void){
    printf("count = %d", count);
    func();
    return 0;
}
```

```c
#include <stdio.h>
extern int count;  // Unless you have used 'static' (for global)
                   // (variables), you can bring the variable
void func(void){   // 'count' from another file.
    printf("count = %d", count);
    return 0;
}
```

