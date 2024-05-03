#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <linux/kthread.h>
#include <linux/sched.h>

int main() {
    static struct task_struct *kthread;

    thread1 = kthread_create(thread_fn, NULL, "thread1");
    wake_up_process(thread1);
    kthread_stop(thread1);

    return 0;
}
