#include <linux/module.h>  
#include <linux/kernel.h>  
#include <linux/init.h>   

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
