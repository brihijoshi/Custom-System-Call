/*
 * CSE231: Operating Systems
 * Assignment 1: A Simple System Call
 * Brihi Joshi (2016204)
 * Taejas Gupta (2016204)
 * February 10, 2018
 *
 * C program to test out implementation of sh_task_info().
 */

#include <stdio.h>
#include <linux/kernel.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "sh_task_info.h"

int main()
{
	int pid;
	char filename[1024];
	printf("Enter PID: ");
	scanf("%d", &pid);
	printf("Enter file name: ");
	scanf("%s", filename);

	long stat = sh_task_info(pid, filename);
	if (stat != 0) {
		printf("%s\n", strerror(errno));
		return 1;
	}

	return 0;
}
