#include <stdio.h>
#include <conio.h>
int main()
{
	int cond,p,q,r,t,t1,t2,t3,t4;
	int t5,t6,t7,t8,t9,t10;
	char condn;

	t=0;

	// clrscr();

	printf("\t ENTER (1) TO START THE PROCESS.\t");
	scanf("%d",&cond);

	a:
	switch (cond)
	{
	case 1:
	a1:
	printf("\n\t HAS THE MATERIAL ARRIVED?\t");
	printf("\n\t IS THE ROBOT 1 IDLE?\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t ROBOT 1 PICKS UP THE MATERIAL.\t");
		printf("\n\t ENTER THE TIME REQUIRED 't1'\t");
		scanf("%d",&t1);
		t= t+t1;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a1;
	}
	break;
	case 2:
	a2:
	printf("\n\t IS THE INDEXING TABLE IDLE\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t ROBOT 1 LOADS THE MATERIAL ON THE INDEXING TABLE\t");
		printf("\n\t ENTER THE TIME REQUIRED 't2'\t");
		scanf("%d",&t2);
		t= t+t2;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED .\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a2;
	}
	break;
	case 3:
	a3:
	printf("\n\t HAS THE INDEXING TABLE STARTED\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t THE INDEXING IS GOING ON.\t");
		printf("\n\t ENTER THE TIME REQUIRED 't3'\t");
		scanf("%d",&t3);
		t= t+t3;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED! WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a3;
	}
	break;
	case 4:
	a4:
	printf("\n\t HAS THE INDEXING TABLE FINISHED?\t");
	printf("\n\t IS ROBOT2 IDLE?\t");
	printf("\n\t IS THE MACHINE IDLE?\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t ROBOT 2 IS PICKING UP THE MATERIAL FROM THE TABLE.\t");
		printf("\n\t ENTER THE TIME REQUIRED 't4'\t");
		scanf("%d",&t4);
		t= t+t4;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a4;
	}
	break;
	case 5:
	a5:
	printf("\n\t IS ROBOT 2 REACHING FOR THE CHUCK\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t THE CHUCK IS CLOSING\t");
		printf("\n\t ENTER THE TIME REQUIRED 't5'\t");
		scanf("%d",&t5);
		t= t+t5;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a5;
	}
	break;
	case 6:
	a6:
	printf("\n\t IS THE CHUCK CLOSED?\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t ROBOT 2 RELEASES THE JOB AND COMES BACK.\t");
		printf("\n\t ENTER THE TIME REQUIRED 't6'\t");
		scanf("%d",&t6);
		t= t+t6;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a6;
	}
	break;
	case 7:
	a7:
	printf("\n\t IS ROBOT 2 IDLE?\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t ROBOT 2 PICKS UP THE MATERIAL.\t");
		printf("\n\t ENTER THE TIME REQUIRED 't7'\t");
		scanf("%d",&t7);
		t= t+t7;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a7;
	}
	break;
	case 8:
	a8:
	printf("\n\t IS THE EXECUTION COMPLETE?\n\t IS ROBOT 2 IDLE?\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t ROBOT 2 GRIPS THE JOB.\t");
		printf("\n\t ENTER THE TIME REQUIRED 't8'\t");
		scanf("%d",&t8);
		t= t+t8;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a8;
	}
	break;
	case 9:
	a9:
	printf("\n\t IS THE JOB GRIPPED BY THE ROBOT 2?\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t CHUCK RELEASES.\t");
		printf("\n\t ENTER THE TIME REQUIRED 't9'\t");
		scanf("%d",&t9);
		t= t+t9;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a9;
	}
	break;
	case 10:
	a10:
	printf("\n\t HAS ROBOT 2 REACHED THE STORAGE BIN?\t");
	condn=_getche();
	if (condn=='y'||condn=='Y'){
		printf("\n\t ROBOT 2 LOADS THE MATERIAL ON THE STORAGE BIN.\t");
		printf("\n\t ENTER THE TIME REQUIRED 't10'\t");
		scanf("%d",&t10);
		t= t+t10;
		cond++;
		goto a;
	}
	else{
		printf("\n\t CONDITION NOT SATISFIED WAIT.\t");
		t=t+5;
		printf("\n\t CHECK AFTER 5 SECONDS\t");
		goto a10;
	}
	break;
	default:
	printf("\n\t THE PROCESS IS COMPLETE.\t");
	}

	printf("\n\t THE TOTAL TIME TAKEN IS %d SECONDS.\t",t);
	getch();
	return 0;
}
