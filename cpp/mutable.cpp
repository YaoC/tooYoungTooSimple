#include <iostream>
using namespace std;
// // Error!
// // const成员函数不能修改数据成员，除非该成员使用 mutable 修饰
// // tips: 在C++中,只有被声明为const的成员函数才能被一个const类对象调用
// class A {
//     public:
//         int GetValue() const {
//             vv = 1;
//             return vv;
//          }
//     private:
//         int vv;
// };

// // OK!
// class A {
//     public:
//         int GetValue() {
//             vv = 1;
//             return vv;
//          }
//     private:
//         int vv;
// };

// Great!
class A {
  public:
    int GetValue() const {
      vv = 1;
      return vv;
   	}
  private:
    mutable int vv;
};

int main(int argc, char const *argv[])
{
	A a;
	cout<<a.GetValue()<<endl;
	return 0;
}