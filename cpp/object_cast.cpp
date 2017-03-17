#include <iostream>

class A
{
public:
    void foo()
    {
        printf("1");
    }
    virtual void fun()
    {
        printf("2");
    }
};
class B: public A
{
public:
    void foo()
    {
        printf("3");
    }
    void fun()
    {
        printf("4");
    }
};
// output: 121414
// 父类指针指向子类对象，调用同名函数时
// 父类指针中不是虚函数的调用父类函数，是虚函数的则调用子类函数
int main(void)
{
    A a;
    B b;
    A *p = &a;
    p->foo();
    p->fun();
    p = &b;
    p->foo();
    p->fun();
    A *ptr = (A *)&b;
    ptr->foo();
    ptr->fun();
    return 0;
}