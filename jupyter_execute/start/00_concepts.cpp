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

double d = 2.2; // 初始化浮点数
d

int t = 7; // 初始化整数
t

d = d + t; // 将求和结果赋值给 d
d // 可以看出此时 d 是浮点数

t = d * t; // 把乘积结果赋值给 t
t


