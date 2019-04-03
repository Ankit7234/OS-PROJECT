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
  for(c=0;c<a;c++)
  {
    printf("\t\t|  P[%0.0lf]   |       %0.0lf      |     %0.0lf      |\n",process[c],arrivalTime[c],burstTime[c]);
  }
    printf("\t\t**************************\n");


  printf("\n\n\t\t********* Sorting Processes according to Arrivaltime ***********\n");

  for(c=0;c<a;c++)
  {
    for(d=0;d<a;d++)
    {
      if(arrivalTime[c]<arrivalTime[d])
      {
        
        temp = burstTime[d];
        burstTime[d] = burstTime[c];
        burstTime [c] = temp;
	temp = process[d];
        process[d] = process[c];
        process[c] = temp;
                 temp = arrivalTime[d];
        arrivalTime[d] = arrivalTime[c];
        arrivalTime[c] = temp;
      
      }
    }
  } 
  printf("\n\n\t\t ************* NOW VALUES ARE ******************\n\n");
  printf("\t\t *******************************\n");
  printf("\t\t| Process | Arrival Time | Burst Time |\n");
  printf("\t\t**********************************\n");
  for(c=0;c<a;c++)
  {
    printf("\t\t|  P[%0.0lf]   |       %0.0lf      |     %0.0lf      |\n",process[c],arrivalTime[c],burstTime[c]);
  }
    printf("\t\t********************************\n");





  long int e = 1;
  double f_time = 0;
  for(d=0;d<a;d++)
  {
    f_time = f_time + burstTime[d];
    min = burstTime[e];

    for(c=e;c<a;c++)
    {
      if((f_time >= arrivalTime[c])&&(burstTime[c]<min))
      {
        temp = burstTime[e];
        burstTime[e] = burstTime[c];
        burstTime[c] = temp;

        temp = arrivalTime[e];
        arrivalTime[e] = arrivalTime[c];
        arrivalTime[c] = temp;

        temp = process[e];
        process[e] = process[c];
        process[c] = temp;
      }
    }
    e++;
  }

