#include "syscall.h"

#undef __syscall0
#undef __syscall1
#undef __syscall2
#undef __syscall3
#undef __syscall4
#undef __syscall5
#undef __syscall6
#undef __syscall7

long __syscall_proxy0(long n)
{
	return __syscall0(n);
}

long __syscall_proxy1(long n, long a)
{
	return __syscall1(n, a);
}

long __syscall_proxy2(long n, long a, long b)
{
	return __syscall2(n, a, b);
}

long __syscall_proxy3(long n, long a, long b, long c)
{
	return __syscall3(n, a, b, c);
}

long __syscall_proxy4(long n, long a, long b, long c, long d)
{
	return __syscall4(n, a, b, c, d);
}

long __syscall_proxy5(long n, long a, long b, long c, long d, long e)
{
	return __syscall5(n, a, b, c, d, e);
}

long __syscall_proxy6(long n, long a, long b, long c, long d, long e, long f)
{
	return __syscall6(n, a, b, c, d, e, f);
}
/*
long __syscall_proxy7(long n, long a, long b, long c, long d, long e, long f, long g)
{
	return __syscall7(n, a, b, c, d, e, f, g);
}
*/
