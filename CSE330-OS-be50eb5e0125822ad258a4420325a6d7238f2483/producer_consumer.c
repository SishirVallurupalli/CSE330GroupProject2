#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/semaphore.h>
#include <linux/kthread.h>
#include <linux/init.h>
#include <linux/proc_fs.h>
#include <linux/ktime.h>
#include <linux/time.h>
#include <linux/timer.h>
#include <linux/slab.h>

MODULE_LICENSE("GPL");

int buffSize;
int prod;
int cons;
int uuid;

module_param(buffSize, int, 0);
module_param(prod, int, 0);
module_param(cons, int, 0);
module_param(uuid, int, 0);



static int producer(void* data)
{
    return 0;
}

static int consumer(void* data)
{
    return 0;
}

static int __init intialize(void)
{
    printk(KERN_INFO "Hello world!\n");
    return 0;    // Non-zero return means that the module couldn't be loaded.
}

static void __exit clean_exit(void)
{
    printk(KERN_INFO "Cleaning up module.\n");
}

module_init(intialize);
module_exit(clean_exit);