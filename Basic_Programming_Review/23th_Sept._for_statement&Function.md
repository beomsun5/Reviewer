## for statement(loop)

> **The structure of 'for' statement(loop)**

```c
for(expr1; expr2; expr3)
    statement
next statement

// expr1 -> repitition(expr2, statement, expr3)

// if expr2 becomes false, the compiler gets out of the 'for' statement and executes 'next statement'
```

This is the same as this.

```c
expr1;
while(expr2){
    statement
    expr3;
}
next statement
```

※ Although you do not write (expr1) or (expr3) in the for statement, you can initialize (expr1) before the statement, or use increment or decrement (expr3) after the statement. This does not make any error!! it's OK!!

```c
int i = 1, sum = 0; // initializing before the 'for' statement
for(;i<=10;i++)
    sum += i;

int i = 1, sum = 0;
for(;i<=10;){
    sum += i;
    i++; // increment after the 'for' statement
}
// Both of them are OK!!
```



※ If **(expr2) is missing**, the rule is that the test is always **<u>true</u>**!!

----> *'for(;;) == while(1) == **infinite loop**'*

☆ However, when you write for(;;), you have to write (expr1) and (expr3) like the form above!! (Because, there is no condition for 'i')



> **Comma Operator in 'for'**

```c
for(sum = 0, i = 1; i <= n; ++i){
    printf("%d\n", sum);
    sum += i;
}

for(sum = 0, i = 1; i <= n; sum += i, ++i)
    printf("%d\n", sum);

for(sum = 0, i = 1; i <= n; ++i, sum += i)
    printf("%d\n", sum);

// The first and second one are the same code. Therefore they show the same result.
// However, the (expr3) of the third code is different with that of the second code. Therefore the third code shows different result.
```



## do-while statement(loop)

> The structure of do-while statement(loop)

```c
do
    statement
while (expr);
next statement
```

※ If we use do-while statement, the compiler execute the statement at first and then check the (expr) to find out whether (expr) is true or not. Therefore this structure execute (statement) at least one time.



## goto statement(not recommended)

>  The structure of 'goto' statement

```c
...
goto error;
...
error : {
    printf("\nError: ...");
    exit(1);
}
```

※ Do not use this statement in this class...



## break & continue statement

> **'break'** statement

```c
while(1){
    scanf("%1f", &x);
    if(x<0.0) break;
    printf("%f", sqrt(x));
}
// When compiler get to 'break', the compiler get out of the 'while' loop.
```

The 'break' statement causes an exit from the innermost enclosing loop.



> **'continue'** statement 

```c
int n = 10, cnt = 0;
while(cnt < n){
    scanf("%1f", &x);
    if(x > -0.01 && x < +0.01)
        continue;
    ++cnt;
    sum += x;
    }
}
// When compiler get to 'continue',
// it immediately go to the 'cnt < n'

int n;
for(n = 1; n <= 100; n++){
    if(n%3 != 0) continue;
    printf("%4d\n", n);
}
// When compiler get to 'continue',
// it immediately go to the 'n++' and check if 'n<=100' is correct.
```

The 'continue' statement **causes the current iteration of a loop to stop** and **the next iteration to begin immediately**.



## Switch statement

> The structure of 'switch' statement

```c
switch (expr) {
    case expr1:
        statement1;
        break;
    case expr2:
        statement2;
        break;
    default:0
        statement3;
        break;
}
```

※ Cannot write any comparing statement in the 'case', and only certain value, or character can be used.



> How 'break' works

-> Although you go to the certain case, the compiler execute the next case until the compiler get to the 'break;'

```c
switch (val) {
    case 1:
        ++a_cnt;
        break;
    case 2:
        ++b_cnt;
    case 3:
        ++c_cnt;
    default :
        ++other_cnt;
        break;
}
```

-> If the variable 'val' is 2, the increment ++b_cnt; is executed and go to the case 3 and ++c_cnt; is executed because there is no 'break'.

<hr/>
# Conditional Operator

> The structure of Conditional Operator

```c
if(expr1) A = expr2;
else A = expr3

// This is the same as below code

A = expr1 ? expr2 : expr3

// A : the variable that can get expr2 or expr3
```

-> expr1 : condition

-> expr2 : (if the condition is **true**, executed)

-> expr3 : (if the condition is **false**, executed)



# Functions & Structured Programming

- Every C program has at least one function. ---> ***main()***



## Defining a function

```c
return_type function_name (parameter list) {
    body of the function
}
```



<Return_Type>

- The data type of the value the funciton returns.

- If 'return_type' is **void**, this function performs the desired operations **without returning any value**.



<Function_Name>

- The actual name of the function



<parameter_list>

- This refers to the **type, order, and number** of the parameters of a function.
- Parameters are optional (= Not containing any parameter is possible)



## Function invocation

```c
#include <stdio.h>

void prn_message(void); //Function Declaration (prototype)

int main(void)
{
    prn_message(); // Function Calling(Go to the function below)
    printf("Bye!\n");
}

void prn_message(void)
{
    printf("A message for you: ");
    printf("Have a nice day!\n");
    return; // Since return type is void, there is nothing to return
}           // and go back to the main function
```



## Return statement

> We can write value or expression after the 'return'

```c
return;        // return nothing
return 77;     // return integer
return ++a;    // return something with pre/post increment/decrement
return (a+b);  // return something with arithmetic operator
```



## Function Calling

![](img/Function_Calling.png)

-> Like the code above, if we call the function, the values in j, k are **copied** and sent to the parameter a, b



## Function declaration (prototype)

> A function declaration tells the compiler about **a function name** and **how to call the function**.

```c
return_type function_name(argument list);
```



![](img/argument_list.png)

-> This means the user do not have to write the names of arguments. However, **the data types** of each arguments should be written.



※ No function prototype : Define the funciton before calling!!

--------> Write all of the function before writing the main!

![](img/not_prototype.png)

## Function call-by-value

> **Copies** the actual value of an argument into the function.

> In this case, changes made to the parameter inside the function **have no effect on the original value**. --------> ***Just the copy one***.