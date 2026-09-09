Yes. In C++, several operators **cannot be overloaded**.

The main ones are:

```cpp
.
```

Member access operator:

```cpp
obj.member
```

Cannot be overloaded.

```cpp
.*
```

Pointer-to-member access operator:

```cpp
obj.*ptr
```

Cannot be overloaded.

```cpp
::
```

Scope resolution operator:

```cpp
ClassName::member
```

Cannot be overloaded.

```cpp
?:
```

Conditional/ternary operator:

```cpp
condition ? value1 : value2
```

Cannot be overloaded.

```cpp
sizeof
```

Size operator:

```cpp
sizeof(obj)
```

Cannot be overloaded.

```cpp
typeid
```

Run-time type information operator:

```cpp
typeid(obj)
```

Cannot be overloaded.

```cpp
alignof
```

Alignment operator:

```cpp
alignof(Type)
```

Cannot be overloaded.

Also, some newer/custom syntax cannot be overloaded either, such as:

```cpp
co_await
```

Actually, `co_await` **can** be overloaded.

So the important classic list is:

```cpp
.    .*    ::    ?:    sizeof    typeid    alignof
```

A simple way to tell students:

> Most C++ operators can be overloaded, but operators that control language structure, type information, or direct member lookup cannot be overloaded.
