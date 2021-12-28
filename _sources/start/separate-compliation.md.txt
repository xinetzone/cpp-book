# 分离式编译

随着程序越来越复杂，把程序的各个部分分别存储在不同文件中组织程序逻辑是很重要的特性。

一个 C++ 程序可能包含许多独立开发的部分，例如函数、用户自定义类型等。为了清晰地定义这些组成部分之间的交互关系。第一步也是最关键的一步是：**将某个部分的接口和实现分离开**。

C++ 支持 **分离式编译**：用户只能看到所用类型和函数的声明，它们的定义则放置在分离的源文件中，并被分别编译。

在语言层面，C++ 使用声明描述 **接口**。声明指定了使用某函数或者某种类型所需的全部内容。例如：

```cpp
// func.h
// 平方函数接受一个 double，返回一个 double
double square(double);
```

这里 `func.h` 被称为 **头文件**，用户将其包含（`include`）到程序以访问接口。例如，`square` 的定义（即实现）在另外的文件中：

```cpp
// func.cc
// 平方函数接受一个 double，返回一个 double
// 函数定义

#include "func.h" // 获得接口

double square(double x) {
    return x * x;
}
```

用户使用接口的程序，被写入：

````{tab} g++
```cpp
// user.cc
// 平方函数接受一个 double，返回一个 double
// 函数定义

#include "func.hpp" // 获得接口

// 计算 1~n 的平方和
double sum_square(int n) {
    double x{0};
    for (int i {1}; i <= n; ++i)
        x += square(i);
    return x;
}
```

使用 GCC 编译：

```sh
g++ user.cc func.cc
```
````

````{tab} xeus-cling
在 Jupyter Notebook 中
```cpp
// user.cc
// 平方函数接受一个 double，返回一个 double
// 函数定义
#pragma cling load("func.cc");

// 计算 1~n 的平方和
double sum_square(int n) {
    double x{0};
    for (int i {1}; i <= n; ++i)
        x += square(i);
    return x;
}
```
````