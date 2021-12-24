# 表达式

```{mermaid}
stateDiagram
    direction LR
    A: 表达式
    
    state A {
        B: 赋值语句
        C: I/O 语句
        D: 函数调用
    }
```