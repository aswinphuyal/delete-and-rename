	#include<stdio.h>
	#include<conio.h>
	main(){
		char name[20];
		int age;
		FILE *fp;
		fp=fopen("recorf.dat","w");
		printf("enter name");
		scanf("%s",name);
		printf("enter age");
		printf("%d",&age);
		fprintf(fp,"%s\n%d",name,age);
		fclose(fp);
		rename("record.dat","rec.txt");
		remove("rec.txt");
		getch();
	}
