int 苹果数量;

int hi_world;
int HiWorld;

int Hi World; // 错误：因为标识符不能有空格

int Hi@World; // 错误：因为标识符不能有 @

int _foo; // 不要这样用
int foo_boor; // 正确
int foo__bar; // 不要这样用
int foo_; // 正确

sizeof(bool) // 1 个字节

sizeof(char) // 1 个字节

sizeof(int) //  4 个字节

sizeof(double)  // 8 个字节

ye

double d1 {2.3};
d1

double d1 = 2.3;
d1

int a = 7; // a 初始化为 7
a

a = 4; // a 通过 赋值语句，获得新值 4
a

int b = a; // b 的值为 a 的值的拷贝
b

b = a + 5; // b 获得新值 a+5
b

a = a + 7; // a 获得新值 a+7
a

int a = 7;
a // 查看 a 的值

++a; // 等价于 `a = a + 1;`
a

int a = 7;
a += 7; // 表示 `a = a + 7`
a

a -= 7; // 表示 `a = a - 7`
a

a *= 2; // 表示 `a = a * 2`
a

a /= 2; // 表示 `a = a / 2`
a

a %= 2; // 表示 `a = a % 2`
a

// 计算一些表达式
int 长度 = 30; // 整数字面常量（用于变量的初始化）
int 宽度 = 50;
int 面积 = 长度 * 宽度; // 乘法运算

float x = 56;
sizeof(x*5+10) // 计算的是 x*5+10 的结果 290.0 的大小

double xxx; // 仅仅声明，没有初始化，是未定义的
double y = xxx; // y 的值也是未定义的
double z = 2.0 + xxx; // + 的意义和 z 都是未定义的

char c = '!';
x

int t = c; // 安全转换为 int
t

int t2 = '!';
t2

char c2 = t;
c2

int a = 525;
a

char c = a; // 试图将一个“大”的整数“压缩”进小的字符型
c

int b = c;
b

可以看出 `a` 不等于 `b`。

这种转换又称为“窄化”转换。

5/2 // 整型算术运算

2.5/2 //  浮点型算术运算

'a' + 1; // 等同于 int{'a'} + 1

double d = 2.5; // 初始化浮点数
d

int t = 2; // 初始化整数
t

double d2 = d / t;
d2

int t2 = d / t; // 窄化转换
t2 

int t3 {d / t};


