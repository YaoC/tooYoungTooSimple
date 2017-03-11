#coding=utf-8
'''
设一个变量是10亿 1 billion (10^9)， 然后向它加 10^-6 加一百万 (10^6) 次，
然后再减去10亿，结果是什么？
'''
def numerical_stability():
	a = 1000000000
	b = 0.000001
	c = 1000000
	d = a
	print a+b*c-a
	for i in xrange(c):
		d += b
	print d-a

if __name__ == '__main__':
	numerical_stability()