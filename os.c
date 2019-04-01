#include<stdio.h>
#include<conio.h>
int main()
{
  printf("\t\t ******** SCHEDULING PROCESS ********\n\n");
  long int a,c=0,d=0;
  printf("ENTER NUMBER OF PROCESS - : ");
  scanf("%ld",&a ); 
  double priority[a],avg_waiting,avg_turnaround,burstTime[a],arrivalTime[a],waitingTime[a],turnaroundTime[a], process[a], temp, completionTime[a],min,sum=0,sum2=0,wait_final, turnaround_final, wait_avg, turnaround_avg;
  for(c=0;c<a;c++)
  {
    printf("\nEnter Burst Time for Process [%d] : ", c+1 );
    scanf("%lf", &burstTime[c]);
    printf("Enter Arrival Time for Process [%d] : ", c+1 );
    scanf("%lf", &arrivalTime[c] );
    process[c]=c+1;
  }

  printf("\n\n\t\t ********* ENTERED VALUES ARE : *********\n\n");
  printf("\t\t**************************\n");
  printf("\t\t| Process | Arrival Time | Burst Time |\n");
  printf("\t\t*************************\n");
