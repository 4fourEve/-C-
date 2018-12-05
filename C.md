#include<stdio.h>
struct student /*结构体*/
   {int num;
    char name[20];   //学号
    char sex[5];      //姓名
    int age;          //性别
    char bro[15];     //年龄
    char add[30];     //住址
    char phone[13];   //手机号
    char em[20];      //E-mail
    }stu[100];        //结构体名

 int looknum(int num) /*查看是否有这个学号的函数*/
 { int i;
   for(i=0;i<=100;i++)
   if(stu[i].num==num) return(num);
 }

tiaojia() /*添加信息函数*/
{ int num,num2,i,x;
G:printf("\t请输入学号：");
H:scanf("%d",&num);
V:if(num>100)
  {printf("\n这个学号太大了!\n请输入1--100 的学号:");
   scanf("%d",&num);
   if(num>100)goto V;
   printf("\n");
  }
  num2=looknum(num);
  if(num==num2)    /*判断这个学号是否存在*/
  {printf("\n这个学号已经存在，请重新输入另一个学号。");
   goto H;
  }
  i=num-1;
   stu[i].num=num;
  printf("\t请输入姓名：");
   scanf("%s",stu[i].name);
  printf("\t请输入性别：");
   scanf("%s",stu[i].sex);
  printf("\t请输入年龄：");
   scanf("%d",&stu[i].age);
  printf("\t请输入出生日期：");
   scanf("%s",stu[i].bro);
  printf("\t请输入住址：");
   scanf("%s",stu[i].add);
  printf("\t请输入手机号：");
   scanf("%s",stu[i].phone);
  printf("\t请输入E-maill：");
   scanf("%s",stu[i].em);
  printf("\n\t<*添加信息成功*>\n\n");
  printf("\t1.继续添加\n");
  printf("\t2.退出添加\n");
  scanf("%d",&x);
  switch(x)
  {case 1:goto G;
   default:break;}
}

quanbu()/*输出全部信息函数*/
{int i;
 printf("\t\t全部学生信息如下\n\n");
 printf("学号\t姓名\t性别\t年龄\t出生日期\t住址\t手机号\t\tE-mail\n");
 for(i=0;i<=100;i++) if(stu[i].num!=0)printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].bro,stu[i].add,stu[i].phone,stu[i].em);
}

xiugai()/*修改信息函数*/
{ int x,y,num,num2;
K:printf("\t请输入要修改的学号：");
  scanf("%d",&num);
  num2=looknum(num);
  if(num==num2)	     /*判断这个学号是否存在*/
  { printf("\n\t这个学号信息如下\n\n");
    printf("学号\t姓名\t性别\t年龄\t出生日期\t住址\t手机号\t\tE-mail\n");
    printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[num-1].num,stu[num-1].name,stu[num-1].sex,stu[num-1].age,stu[num-1].bro,stu[num-1].add,stu[num-1].phone,stu[num-1].em);
    printf("\n\t1.确认修改");
    printf("\n\t2.取消修改\n");
    scanf("%d",&x);
    if(x==1)
   {stu[num-1].num=num;
    printf("\t请输入姓名：");
     scanf("%s",stu[num-1].name);
    printf("\t请输入性别：");
     scanf("%s",stu[num-1].sex);
   	printf("\t请输入年龄：");
     scanf("%d",&stu[num-1].age);
	printf("\t请输入出生日期：");
     scanf("%s",stu[num-1].bro);
	printf("\t请输入住址：");
     scanf("%s",stu[num-1].add);
	printf("\t请输入手机号：");
     scanf("%s",stu[num-1].phone);
	printf("\t请输入E-maill：");
     scanf("%s",stu[num-1].em);
    printf("\n\t<*修改信息成功*>\n");
	goto P;
	}
	else goto P;
  }
  else
  {printf("\n\t没有这个学号,你可能记错了!\n");
 P:printf("\n\t1.继续修改\n");
   printf("\t2.退出修改\n");
   scanf("%d",&y);
   switch(y)
   {case 1:goto K;
	default:break;
   }
  }
}

void shanchu()/*删除信息函数*/
{int x=2,y=2,num,num2;
L:printf("\t请输入要删除的学号：");
  scanf("%d",&num);
  num2=looknum(num);
  if(num==num2)    /*判断这个学号是否存在*/
  {printf("\n\t这个学号信息如下\n\n");
   printf("学号\t姓名\t性别\t年龄\t出生日期\t住址\t手机号\t\tE-mail\n");
   printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[num-1].num,stu[num-1].name,stu[num-1].sex,stu[num-1].age,stu[num-1].bro,stu[num-1].add,stu[num-1].phone,stu[num-1].em);
   printf("\n\t1.确认删除");
   printf("\n\t2.取消删除\n");
   scanf("%d",&x);
   switch(x)
   {case 1:{stu[num-1].num=0;
 	       printf("\t<*删除信息成功*>\n");}
	default:break;
   }
   goto D;
  }
  else
  {printf("\n\t没有这个学号,你可能记错了!\n");
  D:printf("\n\t1.继续删除\n");
   printf("\t2.退出删除\n");
   scanf("%d",&y);
   switch(y)
   {case 1:goto L;
    default:break;}
  }
}

 void chakan()/*查看信息函数*/
 {
   int x=1,y=2,z=2,i,num,num2;
   char name,name2;
   printf("\t1.按学号查询\n\t2.按姓名查询\n");
   scanf("%d",&x);      /*输入查看方式*/
   if(x==1)             /*学号查询*/
   {
 M:printf("\t请输入查看的学号：");
   scanf("%d",&num);
   num2=looknum(num);
   if(num==num2)    /*判断这个学号是否存在*/
   {printf("\t这个学号信息如下\n\n");
    printf("学号\t姓名\t性别\t年龄\t出生日期\t住址\t手机号\t\tE-mail\n");
    printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[num-1].num,stu[num-1].name,stu[num-1].sex,stu[num-1].age,stu[num-1].bro,stu[num-1].add,stu[num-1].phone,stu[num-1].em);
    goto J;
   }
   else
   {printf("\n\t没有这个学号,你可能记错了!\n");
 J: printf("\n\t1.继续查看\n");
    printf("\t2.退出查看\n");
    scanf("%d",&y);
    switch(y)
	{case 1:goto M;
     default:break;
	}
  }
 }
 if(x==2)              /*姓名查询*/
 {
U:printf("\t请输入查看的姓名：");
  scanf("%s",&name);
  for(i=0;i<=100;i++)
  {if(strcmp(&stu[i].name,&name)==0)/*字符串比较*/
   if(stu[i].num!=0)     /*判断这个学号是否存在*/
   {printf("\t这个姓名信息如下\n\n");
    printf("学号\t姓名\t性别\t年龄\t出生日期\t住址\t手机号\t\tE-mail\n");
    printf("%d\t%s\t%s\t%d\t%s\t%s\t%s\t%s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].bro,stu[i].add,stu[i].phone,stu[i].em);
    goto Q;
   }
  }
  if(i==101)
  {printf("\n\t没有这个姓名,你可能记错了!\n");
Q: printf("\n\t1.继续查看\n");
   printf("\t2.退出查看\n");
   scanf("%d",&z);
   switch(z)
   {case 1:goto U;
    default:break;}
  }
 }
}

main()/*主函数*/
{ int a;
  printf("\n\t*编辑系统--XXXX*\n\n");
  printf("\t 未经允许，不得使用\n");
  printf("\t\n");
T:printf("\n\n\t 1.添加学生信息\n\t 2.全部学生信息\n\t 3.修改学生信息\n\t 4.删除学生信息\n\t 5.查看学生信息\n\t 6.退出系统\n");
  scanf("%d",&a);
  switch(a)
  {case 1:tiaojia();goto T;
   case 2:quanbu();goto T;
   case 3:xiugai();goto T;
   case 4:shanchu();goto T;
   case 5:chakan();goto T;
   case 6:break;
   default: printf("\t你的输入不正确，请再次输入:\n");goto T;
  }
  printf("\t谢谢您对本系统的支持和使用\n\n");

  printf("\t2012年4月29日\n\n\n\n\n\n\n\n\n\n\n\n\n");
 }

