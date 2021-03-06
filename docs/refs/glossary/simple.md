# 常用术语

C++ 是一种高级编程语言，设计了大量数据结构和指令。

可以查看 [术语表](/refs/glossary/index) 了解更多概念。

C++ 通过操作计算机内存实现各种各样的任务。先看看一些术语：

```{glossary}
unit
单元
    一个完整东西的与众不同的（如命名）部分。就像我们把相关联的知识点组织成为不同的章节单元。

bit
位
    计算机中基本信息单位。可能的取值为 0 或者 1。

value
值
    一组二进制 {term}`位`，具体的含义由其 {term}`类型` 决定。

type
类型
    定义了一组可能的值以及一组（对象上）的操作。

object  
对象
    存放某种类型值的内存空间。

address
地址
     一个值，用来在计算机内存中查找一个对象。

byte
字节
    大多数计算机中的基本寻址单元。1 byte = 8 bit。

word
字
    计算机的基本单元，通常用于保存一个整数的单元。1 word = 4 byte

initialize
初始化
    为对象赋予最初的（初始）值。

variable
变量
    给定类型的命名对象；除非没有初始化，否则包含一个值。

declaration
声明
    声明是一条语句，负责为程序引入一个新的名字，并指定该命名实体的类型。

definition
定义
    一个实体的声明，提供了所有必要信息，令程序可使用此实体。一种更简单的说法：分配了内存的声明。

function
函数
    一个命名的代码单元或计算的逻辑单元。可以从程序中其他部分调用它。

class
类
    用户自定义类型，可以包含数据成员、函数成员和成员类型。

template
模板
    一个类或者一个函数，用一个或者多个类型或（编译时）值进行参数化；支持泛型编程的基本 C++ 语言结构。

argument
实参
    传递给一个 {term}`函数` 或 {term}`模板` 的 {term}`值`。在模板的情况下，一个实参往往是一个 {term}`类型`。

parameter
形参
参数
    函数或模板显式输入的声明。当被调用时，函数可以通过参数的名字访问传递来的实参。

data
数据
    计算中用到的值。



interface
接口
    一个声明或一组声明，指明了一段代码（如一个函数或类）如何被调用。

iteration
迭代
    重复执行一段代码的动作。

library
库
    一组类型、函数、类等等，实现了一组特性（抽象），这些特性会被很多程序用作其一部分。

file
文件
    计算机中永久保存信息的容器。

source code
源代码
    程序员生成的代码，（原则上）对其他程序员可读。

object code
对象代码
    编译器的输出，链接器的输入。也称为目标代码。

source file
源文件
    源代码文件。

    C++ 源文件常使用后缀 `.cc`、`.cxx`、`.cpp`；C 源文件使用 `.c` 表示。

object file
对象文件
    包含对象代码的文件。也称为目标文件。

header
头文件
    一个包含声明的文件，其中的声明用于程序中不同部分共享接口。

    文件的后缀可以是 `.h`、`.hpp`。

linker
链接器
    将对象代码与库组合称为一个可执行文件的程序。

compiler
编译器
    将源代码转换为二进制代码文件的程序。

operation
操作
    用于执行某个动作，例如函数和运算符。

copy
拷贝
    令两个对象具有相同值的操作。

move
移动
    将一个值从一个对象转移到另一个对象的操作，原对象将获得表示“空”的值。

循环
    反复执行的一段代码；有 for 语句 与 while 语句。
```
