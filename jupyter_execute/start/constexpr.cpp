constexpr double pi = 3.1415926; // 定义一个符号常量 pi

pi = 7; // 错误，试图改变常量的值

double c = 2 * pi;
c

constexpr int max = 18; // 字面常量是常量表达式
int val = 19;

max + 7; // 常量表达式（即常量整数+字面常量）
val + 2; // 因为使用了变量，不是常量表达式

constexpr int max = 500;

void use(int n) {
    constexpr int c1 = max + 7; // 正确，c1 是 507
    const int c2 = n + 7; // 正确，但是 c2 的值可以改变
    // ...
}

void use(int n) {
    constexpr int c1 = max + 7; // 正确，c1 是 507
    const int c2 = n + 7; // 正确，但是 c2 的值可以改变
    // ...
    c2 = 7; // 错误，c2 是常量
}
