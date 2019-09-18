## Assignment operator

- =  :  Assigns values from right side operands to left side operand
- += : (C += A) == (C = C + A)
- -= : (C -= A) == (C = C - A)
- *= : (C *= A) == (C = C * A)
- /= : (C /= A) == (C = C / A)
- %= : (C %= A) == (C = C % A)
- '<<'= : (C <<= A) == (C = C << A)
- '>>'= : (C >>= A) == (C = C >> A)
- &= : (C &= A) == (C = C & A)
- ^= : (C ^= A) == (C = C ^ A)
- |= : (C |= A) == (C = C | A)



<hr/>
## Operator precedence

image(Precedence Table)

![](img/Precedence_Table.png)

> ※ Use **()** for the obvious precedence!!! ----> This is recommended!! The more () you use, the more understandable the codes you have made become!!!



### Short-Circuit Evaluation

ex)

```c
int x = -1, y = 1;
if ((x >= 0) && y >= 0){
    ...
}
```

---> Result :  **x >= 0 (false) ----> Selection == 0 (Already the result is 'false')** Therefore the compiler does not check 'y >= 0'



> If the value x is negative, the sqrt() is not taken.   * sqrt = 루트 (in Korean)



**<Precedence Practice>** - By the expression that you write, the result can change because of "Precedence"

```c
int i, j;

i = 2 && (j = 2); ...... 1)

(i = 0) && (j = 3); ...... 2)

i = 0 || (j = 4); ...... 3)

(i = 2) || (j = 5); ...... 4)
```

1) i = (2 && (j = 2)) ---> i = (2 && 2) -----> **<u>i = 1, j = 2</u>**

2) 0 && (j = 3) ---> **<u>i = 0, j = 2</u>**

(*0 is inserted to variable 'i'* & *inserting 3 to variable 'j' is ignored by "Short-Circuit Evaluation"*)

3) i = ( 0 || (j = 4)) ---> i = ( 0 || 4 ) (F || T) ---> i = 1 -----> <u>**i = 1, j = 4**</u>

(*T || T/F = T* )

4) 2 || (j = 5) ---> ( T || (j = 5)) ---> <u>**i = 2, j = 4**</u>

(*2 is inserted to variable 'i'* & *inserting 5 to variable 'j' is ignored by "Short-Circuit Evaluation"(because i = 2 is already non-zero, that is 'True')*)

<hr/>

# Flow of Control



## if Statement

**The structure of if Statement**

```c
if (expr)
    statement
```

> If 'expr' is **non-zero (true)**, then **'statement' is executed**;
>
> otherwise ('expr' is **zero (false)**), **'statement' is skipped**.



- The expression in an if statement is **a relational, equality or logical expression**.

[ ※ If we use any not relational, uneqaulity, or illogical expression, that program can lead to make an error!!]

ex)

```c
if(y != 0)
    x /= y;
if(a<b && b<c) {
    d = a + b + c;
    printf("Everything is in order.\n");
}
```

In this code, **if y is not 0, x /= y cannot be logical.** Thus, if statement and condition 'y != 0' is needed for logical expression!!

## if-else Statement

```c
if (j < k){
    min - j;
    printf("j is smaller than k\n");
}
if (j >= k){
    min = k;
    printf("j is not smaller than k \n");
}
```

----> This is not that efficient way!! In this situation we use 'if-else' statement!!

```c
if (x < y)
    min = x;
else
    min = y;
printf("Min value is %d\n", min);
```

----> This is similar to the code above! However, it uses 'if-else' statement, and is better than that one.



**The structure of 'if-else' statement**

```c
if (expr)
    statement1
else
    statement2
```

> If 'expr' is **non-zero (true)**, **statement1 is executed** and **statement2 is skipped**;
>
> If 'expr' is **zero (false)**, **only statement2 is executed**



※ It is important to use 'if' statement in a more efficient way, because it can affect the CPU!!



## while Statement(loop)

**The structure of while statement(loop)**

```c
while (expr)       (while loop)
    statement      (while loop)
next statement
```

> If 'expr' is **non-zero (true)**, then **'statement' is executed and control is passed back to the beginning of while loop**. 'while' loop executed repeatedly **until 'expr' is zero(false)**.



ex)

```c
int i = 1, sum = 0;
while (i<=10){
    sum += i;
    printf("i = %d, sum = %d\n", i, sum);
    i++;
}
```

(result)

![](img/sum(while_loop).png)

