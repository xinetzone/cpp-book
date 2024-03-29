# 声明与定义

```{admonition} 需求
深入了解函数的调用、传值、作用域、名称空间。
```

## 作用域

作用域（scope）是程序的文本区域。每个名字都定义在作用域中，在声明点到作用域结束的区间内有效。

C++ 支持的作用域有：

- 全局作用域（globle scope）：在任何其他作用域之外的程序区域。
- 名称空间作用域（namespace scope）：嵌套于全局作用域或者另一个名称空间作用域。
- 类作用域（class scope）：类内的程序区域。
- 局部作用域（local scope）：位于 `{...}` 之内或者函数参数列表中的程序区域。
- 语句作用域（statement scope）：例如，`for`、`while` 等语句内的程序区域。

作用域的主要作用是保持名字的局部性，使之不影响声明于其他地方的名字。

例如：

```cpp
void f(int x) { // f 是全局，x 在 f 的局部作用域中
    int z = x + 7; // z 是局部的
}

int g(int x) { // f 是全局，x 在 g 的局部作用域中
    int f = x + 2; // f 是局部的
    return 2 * f;
}
```

可以表示为：

```{mermaid}
stateDiagram-v2
    state f {
    x1: x
    z
    }
    state g {
    x2: x
    f2: f
    }
```

## 声明和定义

**声明** （declaration）语句将名字引入作用域，其作用是：

- 为命名实体（如变量、函数）指定一个类型。
- （可选）进行初始化（如为变量指定一个初始值，或为函数指定函数体）。

示例：

```cpp
int x = 7; // int 型变量
const double cd = 8.7; //双精度浮点常量
double sqrt(double); // 函数声明，参数为 double，返回值为 double
```

```{important}
C++ 程序中的名字都必须先声明后使用。
```

如果一个声明（还）给出了声明的实体的完整描述，称之为 **定义** （definition）。

示例：

```cpp
int x = 7;
double sqrt(double) {/* ... */}
```

如果想要把变量变成非定义的概念，可以：

```cpp
extern int x;
```


```{important}
1. 声明一个名字可以任意次；
2. 定义一个名字仅仅只有一次。
```

### 区别

1. 声明用于表达“如何使用一个实体（接口）”；
2. 定义用于表达“该实体如何完成它应该做的事情（实现）”。

对于变量来说，声明仅仅是提供了类型，只有定义才能提供对象（存储空间）；对于函数来说，其声明也是仅仅提供类型（参数类型和返回类型），只有定义才提供函数体（可执行的语句）。

```{note}
函数体是作为程序的一部分保存在内存中，因此可以说函数和变量的定义消耗了内存，而声明却没有。
```

### 声明的类别

常用的有：

- 变量
- 常量
- 函数
- 名称空间
- 类型（类和枚举）
- 模板

### 变量和常量的声明

一个变量或常量声明指定了一个名字和一个类型，并可进行初始化。

例如：

```cpp
int a; // 不带初始化
double d = 7; // 使用 = 初始化
double d(7); // 使用 ()初始化
double d {7}; // 使用 {} 初始化
```

常量初始化于变量一样，差别在于多了 `const`，而且必须初始化。

```cpp
const int x = 7; // 使用 = 初始化
const double d {7}; // 使用 {} 初始化
const int p; // 错误：没有初始化
```

```{admonition} 推荐
1. 变量最好也要初始化，以避免一些无法预知的错误。
2. 尽量使用 `{}` 初始化，而不用其他方式初始化。
3. 尽量少用全局变量。
```

还有一些对象内部提供了默认初始化机制，可以不用显式初始化。

## 分离式编译

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
`````{tab-set}
````{tab-item} g++
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

````{tab-item} xeus-cling
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
`````