#include <iostream> // 指出一个头文件

int main() {
    std::cout  << "键入两个数字：" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << v1 << "与"  << v2 << "的和是：" << v1 + v2 << std::endl;
    return 0;
}

main();

int main(){
    int sum = 0, val =  1;
    while (val < 10) {
        sum += val;
        ++val;
    }
    std::cout << "0 到 10 的和：" << sum;
    return 0;
}

main();

int main(){
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
        sum += val;
    std::cout << "0 到 10 的和：" << sum << std::endl;
    return 0;
}

main();

int main(){
    int sum = 0, value = 0;
    while (std::cin >> value)
        sum += value;
    std::cout << "求和：" << sum << std::endl;
    return 0;
}

main();

int a = 45;
a




