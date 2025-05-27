# 使用代码

C++ 是一种编译语言。要想运行一段 C++ 程序，需要首先使用 **编译器** 把 **源文件** 转换为 **对象文件** （也称为目标文件，但我觉得 “对象文件” 更加契合其表达的含义），然后再用 **链接器** 把这些对象文件组合生成 **可执行文件**。

```{mermaid}
stateDiagram
  direction TB
  state input <<fork>>
  state output <<join>>
  state source {
    direction TB
    s1
    s2
  }
  state object {
    direction TB
    o1
    o2
  }
  [*] --> input
  input --> s1
  input --> s2
  s1 --> o1:编译
  s2 --> o2:编译
  o1 --> output
  o2 --> output
  output --> e:链接
  e --> [*]
  s1:源文件1
  s2:源文件2
  o1:对象文件1
  o2:对象文件2
  e:可执行文件
  note left of source : 可移植，文件后缀可以是 .cc、.cpp、.h 等
  note left of object : 不可移植，文件后缀可以是 .o、.obj 等
  note left of e : 适用于特定的硬件/系统，不可移植

```

由编译器发现的错误称为 **编译时错误**，由链接器发现的错误错误 **链接时错误**，直到程序运行时才发现的错误称为 **运行时错误** 或 **逻辑错误**。
