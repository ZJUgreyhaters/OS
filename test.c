#include<linux/unistd.h>
#include<sys/syscall.h>

//#define __NR_mysyscall 333
int main(void)
{
	syscall(333);//or syscall(__NR_mysyscall);
	return 0;
}
