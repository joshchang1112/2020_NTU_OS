// 411
#include <linux/linkage.h>
#include <linux/kernel.h>
#include <linux/timer.h>

asmlinkage long sys_gettime(void) {
    static const long BASE = 1000000000;
    struct timespec t;
    getnstimeofday(&t);
    return t.tv_sec * BASE + t.tv_nsec;
}
