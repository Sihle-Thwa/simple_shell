#!/bin/bash

# Print the maximum value a process ID can be
max_pid=$(cat /proc/sys/kernel/pid_max)
echo "Maximum PID value: $max_pid"
