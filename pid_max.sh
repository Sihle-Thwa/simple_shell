#!/bin/bash

# Print the maximum value a process ID can be
pid_max=$(cat /proc/sys/kernel/pid_max)
echo "Maximum PID value: $pid_max"
