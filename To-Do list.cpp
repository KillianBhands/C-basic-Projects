#include<stdio.h>

int main(){
	int number_of_tasks;
	int checking[100];
	int remains = 0;
	int completed_task;
	char tasks_tobe_done[100][100];
	int decide;
	char line[255];
	FILE *pr = fopen("C:\\Users\\LENOVO\\Documents\\coding journey\\tracklist.txt","r");
	
	while(fgets(line,255,pr)!= NULL){
		printf("%s",line);
	}
	
	FILE *pf = fopen("C:\\Users\\LENOVO\\Documents\\coding journey\\tracklist.txt","a");
	
	printf("Enter the number of tasks (So luong cong viec):");
	scanf("%d",&number_of_tasks);
	
	
	
	for (int i = 1 ; i <= number_of_tasks ;i++){
		printf("Enter task number %d: ",i);
		scanf("%s",&tasks_tobe_done[i]);
		checking[i]=0;
	}
	printf("\n");
	printf("YOUR TODAY'S TO-DO LIST:  \n");
	
	fprintf(pf,"YOUR TODAY'S TO-DO LIST: \n");

	for (int j = 1 ; j <= number_of_tasks ;j++){
		printf(" %d. %s		",j,tasks_tobe_done[j]);
		fprintf(pf," %d. %s		\n",j,tasks_tobe_done[j]);
		printf("%d \n",checking[j]);
		
	}
	
	printf("\n");
	
	fprintf(pf,"COMPLETED TASKS: \n");
	
	do{
		printf("enter completed task: \n");
		scanf("%d",&completed_task);
		
		for (int k = 1 ; k <= number_of_tasks ;k++){
			if(k==completed_task){
				checking[k]=1;
			}
			printf(" %d. %s	",k,tasks_tobe_done[k]);
			printf(" %d \n", checking[k]);
		}
		
		fprintf(pf,"%s \n",tasks_tobe_done[completed_task]);
		printf("Do you want to close the app? enter 1 for yes and 0 for no: ");
		scanf("%d",&decide);
		if(decide==1){
			break;
		}
		remains++;
	}while(remains < number_of_tasks);
	if (remains ==1){
		printf("You have completed all of your tasks");	
		}
	fclose(pf);
	
	
}
