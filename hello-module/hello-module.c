#include <linux/module.h>  /* Needed by all modules */
#include <linux/kernel.h>  /* Needed for KERN_ALERT */
#include <linux/init.h>    /* Needed for init and exit macros */

static int __init meu_inicio(void)
{
   printk("<1>Hello world 1.\n");
   
   
   return 0;
}

static void __exit meu_fim(void)
{
  printk(KERN_ALERT "Goodbye world 1.\n");
}

MODULE_LICENSE("GPL");
module_init(meu_inicio);
module_exit(meu_fim);
