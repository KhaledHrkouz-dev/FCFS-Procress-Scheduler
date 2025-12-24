#include <stdio.h>

/*
    FCFS CPU Scheduling Simulator
    -----------------------------
    This is a simple program to simulate the First Come First Serve scheduling.
    Each task has an arrival time and a burst time.
    The program calculates:
      - Completion Time (when the task finishes)
      - Turnaround Time (total time in the system)
      - Waiting Time (time spent waiting before execution)
    Finally, it prints a table with all information and averages.
*/

int main() {
    int numTasks;     // total number of tasks
    int i;
printf(" Hello\n ");
    // Arrays to store information for each task (max 10 tasks)
    int arrival[10];      // when each task arrives
    int burst[10];        // how long each task needs
    int finish[10];       // when each task finishes
    int turnaround[10];   // total time from arrival to finish
    int wait[10];         // time spent waiting

    float avgTurnaround = 0;  // average turnaround time
    float avgWait = 0;        // average waiting time

    // Ask user for number of tasks
    printf("Enter number of tasks (max 10): ");
    scanf("%d", &numTasks);

    // Get arrival time and burst time for each task
    for(i = 0; i < numTasks; i++) {
        printf("\nTask %d\n", i + 1);
        printf("Arrival time: ");
        scanf("%d", &arrival[i]);
        printf("Burst time: ");
        scanf("%d", &burst[i]);
    }

    // Calculate completion times
    finish[0] = arrival[0] + burst[0]; // first task finishes at arrival + burst

    for(i = 1; i < numTasks; i++) {
        if(arrival[i] > finish[i-1])
            finish[i] = arrival[i] + burst[i]; // CPU was idle until this task arrived
        else
            finish[i] = finish[i-1] + burst[i]; // task waits until previous finishes
    }

    // Calculate turnaround time and waiting time
    for(i = 0; i < numTasks; i++) {
        turnaround[i] = finish[i] - arrival[i];
        wait[i] = turnaround[i] - burst[i];

        avgTurnaround += turnaround[i];
        avgWait += wait[i];
    }

    avgTurnaround /= numTasks;  // final average
    avgWait /= numTasks;

    // Display the results in a table
    printf("\n============================================================\n");
    printf("Task  Arrival  Burst  Finish  Turnaround  Waiting\n");
    printf("============================================================\n");

    for(i = 0; i < numTasks; i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",
               i + 1, arrival[i], burst[i], finish[i], turnaround[i], wait[i]);
    }

    printf("============================================================\n");
    printf("Average Turnaround Time: %.2f\n", avgTurnaround);
    printf("Average Waiting Time: %.2f\n", avgWait);

    return 0;
}
