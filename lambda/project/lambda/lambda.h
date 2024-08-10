#ifndef LAMBDA_H
#define LAMBDA_H
int sum(int a,int b){
    return a+b;
}
int add(int a,int b,int(*sum1)(int a,int b)){
    sum1(a,b);
}
#endif // LAMBDA_H
