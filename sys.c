asmlinkage int sys_mysyscall(void)
{

	printk("The pfcount is %lu.\n", pfcount);
	printk("current->pf is %lu.\n"，current->pf);

	return 0;
}