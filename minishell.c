#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

struct PCB{
int pid;
int ppid;
int priority;
};

int main(){
struct PCB process;
if(fork()){
    process.pid=getpid();
    process.ppid=getppid();
    process.priority=1;
}
else{ process.pid=getpid();
    process.ppid=getppid();
    process.priority=1;}

printf("------------------------------\n");
printf("Process ID: %d\n",process.pid);
printf("Process parent ID: %d\n",process.ppid);
printf("Process priority number: %d\n",process.priority);
printf("-------------------------------\n");
return 0;}
