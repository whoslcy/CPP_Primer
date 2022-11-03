# 2.19
pointer is object but reference is not

the value of pointer can be rebound but reference can not

# 2.20
assign 42 to i

assign the address of i to p1

square i to which p1 points to and assign the result of square to i

# 2.21
1. illegal, cannot initialize a variable of type `double *` with an rvalue of type `int *`
2. illegal, cannot initialize a variable of type `int *` with an lvalue of type `int`
3. legal

# 2.22
if (p) // p in a conditional expression evaluates to true
if (*p) // if \*p != 0 then *p evaluates to true or false

# 2.23
cannot

I don't know the value of a non-null pointer is correctly assigned or residual

# 2.24
pointer of type `void *` can receive any address

cannot initialize `lp` of type `long *` with an rvalue of `int *`

# 2.25
1. ip - pointer, i - int, r - reference
2. i - int, ip - null pointer
3. ip - pointer, ip2 - int

# 2.26
1. illegal: not initialized
2. legal
3. legal
4. ++cnt; //legal</br>
++sz; //illegal: const variable cannot be modified

# 2.27
# 2.28
# 2.29

# 2.30
v2 - top-level
p2 - low-level
p3 - both top and low
r2 - low-level

# 2.31
r1 = v2; // legal
p1 = p2; // illegal
p2 = p1; // legal
p1 = p3; // illegal
p2 = p3; // legal