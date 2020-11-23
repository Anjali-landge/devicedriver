#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>
#include<linux/stat.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ANJALI");

int add_fun(int a,int b)
{
	return a+b;
}
EXPORT_SYMBOL_GPL(add_fun);
static int __init init_fun(void)
{
	printk(KERN_ALERT" inside add init fun\n");
	return 0;
}
static void __exit exit_fun(void)
{
	printk(KERN_ALERT" exit average module fun \n");
}
module_init(init_fun);
module_exit(exit_fun);

