#include <iostream>
#include "lambda.h"
using namespace std;

int main()
{
    auto add_ = [](int a,int b)->int {
        return a+b;
    };
    int sum_=add_(10,20);
    cout << sum_ << endl;

    //���лص�
    int sum__=add(10,30,sum);
    cout << sum__<< endl;

    //ʹ����������lambda���ʽ
    sum__=add(10,40,[](int a,int b)->int{
        return a+b;
    });
    cout << sum__<< endl;
    return 0;
}
