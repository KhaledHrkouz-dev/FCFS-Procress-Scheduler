# C# FCFS CPU Scheduling Simulator

This project simulates the **First Come First Serve (FCFS)** CPU scheduling algorithm.  
It helps students and developers understand how tasks are scheduled in a CPU using the FCFS method.

Each task has an **arrival time** and a **burst time**, and the program calculates:

- **Completion Time**: when the task finishes execution  
- **Turnaround Time**: total time spent in the system  
- **Waiting Time**: time spent waiting before execution  

The program prints a table with all tasks’ information and calculates **average turnaround** and **average waiting times**.

---

## Features

- Input number of tasks, arrival times, and burst times  
- Display a clear table of tasks with their computed times  
- Calculate and display average turnaround and waiting times  

---

## How to Run

1. Clone the repository:
   ```bash
   git clone <your-repo-link>
   Enter number of tasks (max 10): 3

Task 1
Arrival time: 0
Burst time: 5

Task 2
Arrival time: 1
Burst time: 3

Task 3
Arrival time: 2
Burst time: 8
What Your Program Shows:
===================================================================
Task Arrival Duration Finishes Total Time Wait Time
===================================================================
1 0 5 5 5 0
2 2 3 8 6 3
3 3 4 12 9 5
===================================================================
Average Total Time: 6.67
Average Wait Time: 2.67
--Authors--
--KHALED-HARKOUZ--
KhaledHrkouz-dev 
--NESSISSEN-MOHAMED-SEDIK--
silvabarca31-sketch
