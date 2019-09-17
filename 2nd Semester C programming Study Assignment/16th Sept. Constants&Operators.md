# Constant

## (Symbolic) Constants - 'const'

> We can use 'const' prefix to declare constatnts with a specific type.

ex)

```c
const int LENGTH = 10;
const int WIDTH = 5;
const char NEWLINE = '\n';
```



## #define preprocessor

> more beneficial than using 'const'(symbolic constant)

ex)

```c
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
```



## Literal Constants (Integer literals)

- **Decimal = 0~9**
  ex) 85 45 654

- **Octal = 0~7** (prefix 0 ---> The expression starts with 0)
  ex) 012 057 042 -------> 0 | □(1~7) | □(1~7) | □(1~7) | ~~ (same format)

- **Hexadecimal = 0~F(0123456789ABCDEF)**    -----------> very useful when we use C language to see the bit pattern.

  ex) 0x4fc 0x3aD 0x7cB (<u>Capital or lower size does not matter</u>)

  

  ※ Caution!! **0xFeeL ----> correct**

  (because <u>Fee -> hexidecimal expression</u> / <u>L -> long expression</u>)

ex)

<hr/>

30 -> int
30u -> unsigned int
30l -> long (8byte)
30ul (=30lu) -> unsigned long

<hr/>

## Floating-point literals

210f(X) -> 210.f(O)
510E?????
.e55???

---------> This part can be changed by the compiler types. Therefore I can learn more deeply or review this when the vacation comes. Just refer to the professor's PPT!! 



## Character literals

(Nothing special..)

- Using 'char' ---> This is not the meaning of declaring character insert, 'char' is **just a 1 byte data type**.



## String literals

---> Array of Characters (**ends with NULL '\0' character -> 1byte more needed**)
---> Difference between String and Character (**char : ''** / <u>string : ""</u>)
---> If you want to **change the line** when you use string literals, you can use **\n** in them.



<hr/>

# Operators

> Arithmetic operator, Relational operator, Logical operator, Bitwise operator, Assignment operator, misc operator

<hr/>

## Arithmetic operators : + - * / % ++ --

(/ : Just take the integer part of quotient //// % : Take the remainder)



## Relational operators : == != > < >= <=

> Used for comparison

> boolean -> true = 1 (return value) / false = 0 (return value)

- == (equal)
- != (not eqaul)
- '>' (greater than)
- '<' (less than)
- '>=' (greater than or equal)
- '<=' (less than or equal)

ex)

```c
int a = 100, b = 23;
int c = 0;
 c = ( a == b ); --> c = 0(false)
 c = ( a != b ); --> c = 1(true)
 c = ( a > b ); --> c = 1(true)
 c = ( a < b ); --> c = 0(false)
 c = ( a >= b ); --> c = 1(true)
 c = ( a <= b ); --> c = 0(false)
```



## Logical operators : && ||  !

- &&(AND operator)
- ||(OR operator)
- !(NOT operator)

***(However actually...  'true' = non-zero / 'false' = zero)***

ex)

```c
int a = 1, b = 0;
a&&b; -> false (Although any number except 1 is assigned to a, the result is 'false')
```



## Bitwise operator

> Working on bits and perform bit-by-bit operation.
>
> (It works only by using 0 or 1)

> ※ Very important when we use things like arduino because each bit pattern has certain meaning.)

- & (AND)
- | (OR)
- ^ (XOR)
- ~ (NOT)
- '<<' (Left Shift Operator)
- '>>' (Right Shift Operator)

**※ <<(Binary Left Shift Operator)  -> (total bit) * (2^n)**
**※ >>(Binary Right Shift Operator) -> (total bit) / (2^n)**

-----> <u>Must be operated within the range of the data type</u> (otherwise 'Overflow' occur)

ex) **'And' Gate**

   Bit A  /  Bit B  /  Result C
       0          0              0
       1          0              0
       0          1              0
       1          1              **1**

<hr/>

ex) **'OR' Gate**
    Bit A  /  Bit B  /  Result C
       0          0              0
       1          0              **1**
       0          1              **1**
       1          1              **1**

<hr/>

ex) **'Exclusive OR' Gate**
    Bit A  /  Bit B  /  Result C
       0          0              0
       1          0              **1**
       0          1              **1**
       1          1              0

<hr/>

ex) **'NOT' Gate**
    Bit   /   Result
      1            0  
      0            **1** 

<hr/>

(example code)

```c
char a = 100, b = 23;
char c;

c = a&b;
c = a|b;
c = a^b;
c = ~a;
c = b<<3;
c = a>>2;
```



<u>**(result)**</u>

 <u>**bit a      0 1 1 0 0 1 0 0   100**</u>
 <u>**bit b      0 0 0 1 0 1 1 1    23**</u>

 <u>**a&b  -> 0 0 0 0 0 1 0 0    4**</u>
 <u>**a|b    -> 0 1 1 1 0 1 1 1   ------------  0x77(119) - hexadecimal**</u>
 <u>**a^b    -> 0 1 1 1 0 0 1 1   ------------  0x73(115)**</u>
    <u>**~a    -> 1 0 0 1 1 0 1 1**</u>
 <u>**b<<3   -> 1 0 1 1 1 0 0 0**</u>
 <u>**a>>2   -> 0 0 0 1 1 0 0 1**</u>
