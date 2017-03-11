#include <iostream>
using namespace std;

// a &a 值相等，都是数组的首地址
// 但意义不同，前者表示a[0]的地址，后者表示数组的整体地址
// a+1 不等于 &a+1
// 前者数组内偏移 后者数组外偏移 

// // output: 2,5
// int main()
// {
// 	int a[5] = {1, 2, 3, 4, 5};
// 	int *ptr = (int *)(&a + 1);
// 	cout<<*(a + 1)<<","<<*(ptr - 1)<<endl;
// 	return 0;
// }

// output: 2,1
int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int *ptr = (int *)(a + 1);
	cout<<*(a + 1)<<","<<*(ptr - 1)<<endl;
	cout<<a+1<<'\n'<<&a+1<<endl;
	return 0;
}