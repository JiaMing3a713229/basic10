#include<stdio.h>    //�ɤJ���Y�� 
#include<stdlib.h>
int main(void){
	char name[100];  //�إ�char�}�C 
	int i=0;         //�إ�int�ܼ�=0
	char option;
	while(true){
		printf("��J�r��\n");
		scanf("%s",&name);  //keyin�r�� 
		while(i<100&&name[i]>=65){               //�j�p�g�ഫ 
			if(name[i]>=65&&name[i]<=90){  //A-Z
				name[i]+=32;
				printf("%c",name[i]);
			}
			else if(name[i]>=97&&name[i]<=122){  //a-z
				name[i]-=32;
				printf("%c",name[i]);
			}
			i++;
		}
		printf("\n");
		i=0;
	} 
	
	
} 
