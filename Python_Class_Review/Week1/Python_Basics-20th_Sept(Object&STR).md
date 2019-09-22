# Python Basics - 20th Sept.



## Object

> All data stored in memorey
>
> ----> (in Python) all data and functions are expressed by 'object'

- all objects have data types, their own 'id'
- variable = a space that store 'object'
- we can access to object by variable name (같은 변수명에 특정 객체를 넣을 때마다 변수명이 가리키는 id가 달라지는 것이다.)



> **The integer storage way in Python(파이썬의 정수 저장 방식의 차이)**
>
> --> Integers from -5 to 256 are stored to certain memory. When new variable is made, it is done by reference, not by allocation. (-5 ~ 256 사이의 정수는 특정 메모리에 저장하며, 새로운 변수 생성시 할당이 아니라 참조를 통해 사용)
>
> --> Therefore, if the same integer is allocated to more than 2 variables, those variables point to the same 'id' (즉, -5 ~ 256 사이의 정수에 대해서는 같은 정수를 다른 변수에 할당시키게 되면 그 변수들은 같은 id를 가리키게 된다.)  
>
> ※ 정수가 할당된 변수를 다른 변수에 할당한다면 이 두 변수의 id 값은 위의 정수 범위에 상관 없이 항상 같다.

== : value comparison / is : memory comparison



## Python Data Types

### Numeric data type(수치 자료형)

- int(정수), float(실수), complex(복수) : immutable (Object cannot be modified)

- bool (Ture/False) - 부울 자료형 : immutable



## Data type dealt with group(?) (군집으로 다루는 자료형)

- str : immutable

ex)

```python
>>> It = "Hello World!"
>>> It[0]
'H'
It[0] = "a"  ----> cannot be modified
```

- list : mutable

ex)

```python
>>> It1 = [1, 2, 3, 4, 5]
 It1[0] = 10
>>> It1
[10, 2, 3, 4, 5] ---> modified
```

- tuple : immutable
- set : mutable
- dict : mutable



### STR

- String is a sequence of characters
- We can say that 'String' is the characters tied with thread 
- Expressed with " "
- There is a sequence, and access data with the index.
- '+' : merging the string, '*' : repeat the string



**§§ Slicing : extracting separate characters**

- if omitted, designated to default value.

  (start : 0, stop : end of the string, step : 1)

- If we justify the **negative integer**, the direction of counting the string is **the left**.

- Index can be made by the integer calculation(+ - * // %)

  ☆ The result must be integer type!!

- in / not in ----> Checking whether certain string is included or not

  (문자열 포함 여부)

![](img/inNotin.png)

- Comparing string : use relational operator(==. !=. <, >, <=, >=)

  ![](img/ComparingStr.png)

**Method that we can use in the string object**

- upper() : Change all string to capital lettrs (문자열을 모두 대문자로 바꾼다)

- lower() : Change all string to smaller letters (문자열을 모두 소문자로 바꾼다)

  ![](img/UpperLower.png)

- isalpha() : If all elements are alphabet, 'True'. If not, 'False'

  (모든 요소가 알파벳이면 참, 아니면 거짓)

- isdigit() : If all elements are digit, 'True'. If not, 'False'

  (모든 요소가 숫자이면 참, 아니면 거짓)

- isspace() : If all elements are space, 'True'. If not, 'False'

  (모든 요소가 공백이면 참, 아니면 거짓)

  ![](img/AlphaDigitSpace.png)

- count() : Count a certain part of the string (부분 문자열을 센다)

- find() : Find a certain part of the string and show the first index

  (부분 문자열을 찾아서 첫 인덱스 알려준다)

  ![](img/CountFind.png)

- join(list type) : How to use : (character).join(list type) ---> Connect data in the list with the character that the user wants (result = string, not the list type)

  (사용 방식 : 문자열.join(리스트)) 리스트에 있는 자료들을 문자열(리스트 자료들을 연결하고자 하는 기호를 보통 사용)로 연결한다. (result = 문자열)

```python
friends = ['alice', 'bob', 'cindy'] # list type
dash = '-'
dash.join(friends)     # '-'.join(friends)
---- result : 'alice-bob-cindy'   # result = string type
```

- split() : 문자열을 스페이스 기준으로 잘라서 리스트에 저장한다.

```python
lists = 'alice bob cindy david'
lists.split()  # separate with 'space'
---- result : ['alice', 'bob', 'cindy', 'david']

date = '2019/09/20'
date.split('/')  #'/'로 분리
---- result : ['2019', '09', '20']
```

