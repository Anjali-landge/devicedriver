#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ANJALI");
int add(int a,int b);
int x=4;
int y=4;
static int add_fun(int x,int y);

static int __init init_fun(void)
{
	printk(KERN_ALERT "inside add  fun is %d \n",add_fun(x,y));
	printk(KERN_ALERT " average is %d \n",add_fun(x,y)/2);
	return 0;
}
static void __exit exit_fun(void)
{
	printk(KERN_ALERT " exit average module fun \n");
}
module_init(init_fun);
module_exit(exit_fun);
	
