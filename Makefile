# CSE231: Operating Systems
# Assignment 1 - A Simple System Call
# Brihi Joshi (2016142)
# Taejas Gupta (2016204)
# February 10, 2018

all:
	gcc sh_task_info.c test.c -o test

clean:
	rm test
