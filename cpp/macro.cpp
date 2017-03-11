#include <iostream>
using namespace std;

#define N 2
#define M N+1
#define NUM (M+1)*M/2

int main(int argc, char const *argv[])
{
	// 8而不是6
	// 宏只做文本替换
	// NUM = (2+1+1)*2+1+1/2
	// 而不是 (2+1+1)*(2+1+1)/2
	cout<<NUM<<endl;
	return 0;
}