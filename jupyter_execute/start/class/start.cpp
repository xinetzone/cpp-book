struct Date {
    int y; // 年
    int m; // 月
    int d; // 日
};

Date today; // 命名对象

today

today.y = 2022;
today.m = 12;
today.d = 27;

void init_day(Date& dd, int y, int m, int d)
{
    // 检查 (y,m,d) 是否合法
    // 如果是的话，用其来初始化 dd
    dd.y = y;
    dd.m = m;
    dd.d = d;
}

void add_day(Date& dd, int n)
{
    // 为 日期 dd 添加 n 天
    dd.d += n;
}

Date today;
init_day(today, 2021, 12, 1); // 检查错误的行为，当下只能人工检查
add_day(today, 5);


