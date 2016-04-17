#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Prashanth Sunder");
MODULE_DESCRIPTION("Helow World Program");

static int __init hello_init(void)
{
	printk(KERN_DEBUG "Hello World!\n");
	return 0;
}

static void __exit hello_cleanup(void)
{
	printk(KERN_DEBUG "Cleaning up Hello World\n");
}

module_init(hello_init);
module_exit(hello_cleanup);
