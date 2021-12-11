#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static char* str = "Andrey G made this!\n";

module_param(str, charp, 0);

static int __init hello_init(void)
{
	pr_alert("The module MY_MODULE inserted.\n");
	return 0;
}
static void __exit hello_exit(void)
{
	printk("%s", str);
	pr_alert("The module MY_MODULE is removed!\n");
}
module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Greeting module");
MODULE_AUTHOR("William Shakespeare");
