class X {   // 类的名字为 X
public:
    // 公共成员；
    // - 用户接口（可被所有人访问）
    // 函数
    // 类型
    // 数据（通常最好为 private）
private:
    // 私有成员；
    // - 实现细节（仅能被该类的成员访问）
    // 函数
    // 类型
    // 数据
};

class X {
    int mf(int);
    // ...
};

class X {
private:
    int mf(int);
    // ...
};

class X {
public:
    int m; // 数据成员
    int mf(int v) { // 函数成员
        int old = m;
        m = v;
        return old;
    }
};

X var; // var 为 类型 X 的变量，即 X 的对象

var.m // 查看 var 的数据成员 m 的初始值

var.m = 7; // 对 var 的数据成员 m 赋值

int x = var.mf(77); // 调用 var 的成员函数 mf()

x // x 获取的是 var 的数据成员 m 前一个状态值

var.m // 获取的是 var 的数据成员 m 当前状态值

class X {
    int m; // 数据成员
    int mf(int v) { // 函数成员
        int old = m;
        m = v;
        return old;
    }
};

class X {
    int m; // 数据成员
    int mf(int v) { // 函数成员
        int old = m;
        m = v;
        return old;
    }
public:
    int f(int i) {
        m = i;
        return mf(i);
    }
};

X x;
int y = x.f(5); // 正确

struct X {
    int m;
    // ...
};

class X {
public:
    int m;
    // ...
};
