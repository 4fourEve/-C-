#include<stdio.h>
struct student /*�ṹ��*/
   {int num;
    char name[20];   //ѧ��
    char sex[5];      //����
    int age;          //�Ա�
    char bro[15];     //����
    char add[30];     //סַ
    char phone[13];   //�ֻ���
    char em[20];      //E-mail
    }stu[100];        //�ṹ����

 int looknum(int num) /*�鿴�Ƿ������ѧ�ŵĺ���*/
 { int i;
   for(i=0;i<=100;i++)
   if(stu[i].num==num) return(num);
 }

tiaojia() /*�����Ϣ����*/
{ int num,num2,i,x;
G:printf("\t������ѧ�ţ�");
H:scanf("%d",&num);
V:if(num>100)
  {printf("\n���ѧ��̫����!\n������1--100 ��ѧ��:");
   scanf("%d",&num);
   if(num>100)goto V;
   printf("\n");
  }
  num2=looknum(num);
  if(num==num2)    /*�ж����ѧ���Ƿ����*/
  {printf("\n���ѧ���Ѿ����ڣ�������������һ��ѧ�š�");
   goto H;
  }
  i=num-1;
   stu[i].num=num;
  printf("\t������������");
   scanf("%s",stu[i].name);
  printf("\t�������Ա�");
   scanf("%s",stu[i].sex);
  printf("\t���������䣺");
   scanf("%d",&stu[i].age);
  printf("\t������������ڣ�");
   scanf("%s",stu[i].bro);
  printf("\t������סַ��");
   scanf("%s",stu[i].add);
  printf("\t�������ֻ��ţ�");
   scanf("%s",stu[i].phone);
  printf("\t������E-maill��");
   scanf("%s",stu[i].em);
  printf("\n\t<*�����Ϣ�ɹ�*>\n\n");
  printf("\t1.�������\n");
  printf("\t2.�˳����\n");
  scanf("%d",&x);
  switch(x)
  {case 1:goto G;
   default:break;}
}

quanbu()/*���ȫ����Ϣ����*/
{int i;
 printf("\t\tȫ��ѧ����Ϣ����\n\n");
 printf("ѧ��\t����\t�Ա�\t����\t��������\tסַ\t�ֻ���\t\tE-mail\n");
 for(i=0;i<=100;i++) if(stu[i].num!=0)printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].bro,stu[i].add,stu[i].phone,stu[i].em);
}

xiugai()/*�޸���Ϣ����*/
{ int x,y,num,num2;
K:printf("\t������Ҫ�޸ĵ�ѧ�ţ�");
  scanf("%d",&num);
  num2=looknum(num);
  if(num==num2)	     /*�ж����ѧ���Ƿ����*/
  { printf("\n\t���ѧ����Ϣ����\n\n");
    printf("ѧ��\t����\t�Ա�\t����\t��������\tסַ\t�ֻ���\t\tE-mail\n");
    printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[num-1].num,stu[num-1].name,stu[num-1].sex,stu[num-1].age,stu[num-1].bro,stu[num-1].add,stu[num-1].phone,stu[num-1].em);
    printf("\n\t1.ȷ���޸�");
    printf("\n\t2.ȡ���޸�\n");
    scanf("%d",&x);
    if(x==1)
   {stu[num-1].num=num;
    printf("\t������������");
     scanf("%s",stu[num-1].name);
    printf("\t�������Ա�");
     scanf("%s",stu[num-1].sex);
   	printf("\t���������䣺");
     scanf("%d",&stu[num-1].age);
	printf("\t������������ڣ�");
     scanf("%s",stu[num-1].bro);
	printf("\t������סַ��");
     scanf("%s",stu[num-1].add);
	printf("\t�������ֻ��ţ�");
     scanf("%s",stu[num-1].phone);
	printf("\t������E-maill��");
     scanf("%s",stu[num-1].em);
    printf("\n\t<*�޸���Ϣ�ɹ�*>\n");
	goto P;
	}
	else goto P;
  }
  else
  {printf("\n\tû�����ѧ��,����ܼǴ���!\n");
 P:printf("\n\t1.�����޸�\n");
   printf("\t2.�˳��޸�\n");
   scanf("%d",&y);
   switch(y)
   {case 1:goto K;
	default:break;
   }
  }
}

void shanchu()/*ɾ����Ϣ����*/
{int x=2,y=2,num,num2;
L:printf("\t������Ҫɾ����ѧ�ţ�");
  scanf("%d",&num);
  num2=looknum(num);
  if(num==num2)    /*�ж����ѧ���Ƿ����*/
  {printf("\n\t���ѧ����Ϣ����\n\n");
   printf("ѧ��\t����\t�Ա�\t����\t��������\tסַ\t�ֻ���\t\tE-mail\n");
   printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[num-1].num,stu[num-1].name,stu[num-1].sex,stu[num-1].age,stu[num-1].bro,stu[num-1].add,stu[num-1].phone,stu[num-1].em);
   printf("\n\t1.ȷ��ɾ��");
   printf("\n\t2.ȡ��ɾ��\n");
   scanf("%d",&x);
   switch(x)
   {case 1:{stu[num-1].num=0;
 	       printf("\t<*ɾ����Ϣ�ɹ�*>\n");}
	default:break;
   }
   goto D;
  }
  else
  {printf("\n\tû�����ѧ��,����ܼǴ���!\n");
  D:printf("\n\t1.����ɾ��\n");
   printf("\t2.�˳�ɾ��\n");
   scanf("%d",&y);
   switch(y)
   {case 1:goto L;
    default:break;}
  }
}

 void chakan()/*�鿴��Ϣ����*/
 {
   int x=1,y=2,z=2,i,num,num2;
   char name,name2;
   printf("\t1.��ѧ�Ų�ѯ\n\t2.��������ѯ\n");
   scanf("%d",&x);      /*����鿴��ʽ*/
   if(x==1)             /*ѧ�Ų�ѯ*/
   {
 M:printf("\t������鿴��ѧ�ţ�");
   scanf("%d",&num);
   num2=looknum(num);
   if(num==num2)    /*�ж����ѧ���Ƿ����*/
   {printf("\t���ѧ����Ϣ����\n\n");
    printf("ѧ��\t����\t�Ա�\t����\t��������\tסַ\t�ֻ���\t\tE-mail\n");
    printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[num-1].num,stu[num-1].name,stu[num-1].sex,stu[num-1].age,stu[num-1].bro,stu[num-1].add,stu[num-1].phone,stu[num-1].em);
    goto J;
   }
   else
   {printf("\n\tû�����ѧ��,����ܼǴ���!\n");
 J: printf("\n\t1.�����鿴\n");
    printf("\t2.�˳��鿴\n");
    scanf("%d",&y);
    switch(y)
	{case 1:goto M;
     default:break;
	}
  }
 }
 if(x==2)              /*������ѯ*/
 {
U:printf("\t������鿴��������");
  scanf("%s",&name);
  for(i=0;i<=100;i++)
  {if(strcmp(&stu[i].name,&name)==0)/*�ַ����Ƚ�*/
   if(stu[i].num!=0)     /*�ж����ѧ���Ƿ����*/
   {printf("\t���������Ϣ����\n\n");
    printf("ѧ��\t����\t�Ա�\t����\t��������\tסַ\t�ֻ���\t\tE-mail\n");
    printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].bro,stu[i].add,stu[i].phone,stu[i].em);
    goto Q;
   }
  }
  if(i==101)
  {printf("\n\tû���������,����ܼǴ���!\n");
Q: printf("\n\t1.�����鿴\n");
   printf("\t2.�˳��鿴\n");
   scanf("%d",&z);
   switch(z)
   {case 1:goto U;
    default:break;}
  }
 }
}

main()/*������*/
{ int a;
  printf("\n\t*�༭ϵͳ--XXXX*\n\n");
  printf("\t δ����������ʹ��\n");
  printf("\t\n");
T:printf("\n\n\t 1.���ѧ����Ϣ\n\t 2.ȫ��ѧ����Ϣ\n\t 3.�޸�ѧ����Ϣ\n\t 4.ɾ��ѧ����Ϣ\n\t 5.�鿴ѧ����Ϣ\n\t 6.�˳�ϵͳ\n");
  scanf("%d",&a);
  switch(a)
  {case 1:tiaojia();goto T;
   case 2:quanbu();goto T;
   case 3:xiugai();goto T;
   case 4:shanchu();goto T;
   case 5:chakan();goto T;
   case 6:break;
   default: printf("\t������벻��ȷ�����ٴ�����:\n");goto T;
  }
  printf("\tлл���Ա�ϵͳ��֧�ֺ�ʹ��\n\n");

  printf("\t2012��4��29��\n\n\n\n\n\n\n\n\n\n\n\n\n");
 }

