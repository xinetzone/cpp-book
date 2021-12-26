int x = 17;

int* pi = &x; // int 指针
pi

double e = 2.14143;

double* pd = &e; // double 指针
pd

*pi

*pd

*pi = 27; // 正确：可以将 27 赋予 pi 指向的 int
*pd = 3.14; // 正确：可以将 3.14 赋予 pd 指向的 double
*pd = *pi; // 正确：可以将一个 int (*pi) 赋予一个 double (*pd)


