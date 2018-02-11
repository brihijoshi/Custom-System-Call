/*
 * CSE231: Operating Systems
 * Assignment 1 - A Simple System Call
 * Brihi Joshi (2016142)
 * Taejas Gupta (2016204)
 * February 10, 2018
 *
 * Wrapper function for syscall sh_task_info().
 */

#include <linux/kernel.h>
#include <sys/syscall.h>

long sh_task_info(int pid, char *fname)
{
	return syscall(318, pid, fname);
}
