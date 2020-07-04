#define _CRT_SECURE_NO_WARNINGS 1
#include <conio.h>
#include <stdio.h>
#include <malloc.h>  //得到指向大小为Size的内存区域的首字节的指针//
#include <string.h>
#include <stdlib.h>   
#define NULL 0
#define LEN sizeof(struct node)  //计算字节//
int ID=0;
struct node
{
	int ID;
	char name[30];     //名字
	char work[30];     //职业
	char phone[30];    //手机
	char QQ[20];       //QQ
	char email[30];    //电子邮件
	char address[30];  //通讯地址
	struct node *next;
};

//定义变量
char reg_name[30] = "", reg_pwd[10] = "";   //定义注册用户名和密码信息
char on_name[30], on_pwd[10];               //定义用户名和密码信息


//用户注册系统
void regist()
{
	//清屏

	printf("\n\n\t\t\t欢迎使用通讯录注册系统\n\n");
	while (1)
	{
		system("cls");
		//输入用户名
		printf("\t\t请输入用户名[不能大于10个字符]：");
		scanf("%s", reg_name);

		//判断用户名
		if (strlen(reg_name) <= 10)
		{
			while (1)
			{
				//输入密码
				printf("\n\t\t请输入密码[密码长度为八位]：");
				scanf("%s", reg_pwd);

				//判断密码
				if (strlen(reg_pwd) == 8)
				{
					printf("\n\n\t\t注册成功，您的用户名是%s,密码是%s\n\n", reg_name, reg_pwd);
					break;
				}
				else
				{
					printf("\n\t\t密码的长度为%d，请重新输入\n", strlen(reg_pwd));
				}
			}
			break;
		}
		else
		{
			printf("\n\t\t用户名的长度为%d，请重新输入\n\n", strlen(reg_name));
		}
	}
}

//判断是否注册
int judge()
{
	if (strcmp(reg_name, "") == 0 && strcmp(reg_pwd, "") == 0)
	{
		printf("\n\n\t\t您尚未注册，请先注册！\n\n");
		return 0;
	}
	else
	{
		return 1;
	}
}

//用户登录
void log_in()
{
	int i;
	system("pause");
	system("cls");

	printf("\n\n\t\t\t欢迎使用通讯录登录系统\n\n");
	//三次登录验证
	for (i = 1; i <= 3; i++)
	{
		printf("\t\t请输入用户名:");
		scanf("%s", on_name);
		printf("\n\t\t请输入密  码:");
		scanf("%s", on_pwd);
		if (strcmp(reg_name, on_name) == 0 && strcmp(reg_pwd, on_pwd) == 0)
		{
			printf("\n\n\t\t登录成功，欢迎使用通讯录系统\n\n");
			break;
		}
		else
		{
			printf("\n\n\t\t登录失败，请重新登录，您还有%d次机会\n\n", 3 - i);
			if (i == 3)
			{
				exit(1);
				break;
			}
		}

	}

}

struct node *shifang(struct node *head); // 释放内存函数声明
//创建函数，不带头结点的链表
struct node *creat(void)       
{
	struct node *head,*p1,*p2;
	char name[20];
	ID=0;
	p1 = (struct node *)malloc(LEN);
	p2 = (struct node *)malloc(LEN);   
	printf("请输入通讯录的内容!\n姓名输入为0时表示创建完毕!\n");
	printf("请输入姓名: ");
	fflush(stdin);
	gets(name);
	if(strcmp(name,"0")!=0)
	{
		strcpy(p1->name,name);
		printf("请输入职业:");     gets(p1->work);
		printf("请输入手机:");     gets(p1->phone);
		printf("请输入QQ:");       gets(p1->QQ);
		printf("请输入电子邮件:"); gets(p1->email);
		printf("请输入通讯地址:");  gets(p1->address);
		head=NULL;
		while(1)
		{
			ID++;   //记录通讯录人数个数
			if(ID==1)
				head=p1;
			else
				p2->next=p1;
			p2=p1;
			printf("请输入姓名:");
			gets(name);
			if(strcmp(name,"0")==0)
			{
				break;
			}
			else
			{
				p1=(struct node *)malloc(LEN);
				strcpy(p1->name,name);
				printf("请输入职业:"); gets(p1->work);
				printf("请输入手机:"); gets(p1->phone);
				printf("请输入QQ:");gets(p1->QQ);
				printf("请输入电子邮件:"); gets(p1->email);
				printf("请输入通讯地址:");  gets(p1->address);
			}
		}
		p2->next=NULL;
		return head;
	}
	else
		return 0;
}
//输出函数
void print(struct node *head)
{
	struct node *p;
	if (head != NULL)
	{
		p = head;
		printf("本通讯录现在共有%d人:\n", ID);
		printf("---姓名-------职业--------手机-------QQ-------Email-------通讯地址\n");
		printf("==================================================================\n");
		do
		{
			printf("== %s", p->name); printf("       ");
			printf("%s", p->work); printf("       ");
			printf("%s", p->phone); printf("       ");
			printf("%s", p->QQ); printf("       ");
			printf("%s", p->email); printf("       ");
			printf("%s", p->address); printf("       \n");
			p = p->next;
		} while (p != NULL);
		printf("==================================================================\n");
	}
	else
		printf("通讯录为空,无法输出!\n");
}

//增加函数
struct node *insert(struct node *head) 
{
	struct node *p0,*p1,*p2;
	char name[20];
	p1=head;
	printf("请输入增加的内容:\n");
	printf("请输入姓名:"); gets(name);
	if(strcmp(name,"0")==0)
	{
		printf("姓名不能为0,增加失败!\n");
		return(head);
	}
	else
	{
		p0=(struct node *)malloc(LEN);
		strcpy(p0->name,name);
		printf("请输入职业:"); gets(p0->work);
		printf("请输入手机:"); gets(p0->phone);
		printf("请输入QQ:"); gets(p0->QQ);
		printf("请输入电子邮件:"); gets(p0->email);
		printf("请输入通讯地址:");  gets(p0->address);
		ID++;
		if(head==NULL)
		{
			head=p0;
			p0->next=NULL;
			return head;
		}
		else
		{
			while(strcmp(p0->name,p1->name)>0&&(p1->next!=NULL))
			{
				p2=p1;
				p1=p1->next;
			}
			if(strcmp(p0->name,p1->name)<0 || strcmp(p0->name,p1->name)==0)
			{
				if(head==p1)
				{
					head=p0;
				}
				else
				{
					p2->next=p0;
				}
				p0->next=p1;
			}
			else
			{
				p1->next=p0;
				p0->next=NULL;
			}
			return head;
		}
	}
}
struct node* delete_txl(struct node *head)
{
	struct node *p,*q;
	char name[30];
	if(head==NULL)
	{
		printf("通讯录为空,无法显示!\n");
		return head;
	}
	p=head;
	printf("请输入需要删除的人的姓名:");
	gets(name);
	if(strcmp(head->name,name)==0)
	{
		head=head->next;
		free(p);
		printf("删除操作成功！\n");
		return head;
	}
	else
	{
		q=head,p=head->next;
		while(p!=NULL)
		{
			if(strcmp(p->name,name)==0)
			{
				q->next=p->next;
				free(p);
				printf("删除操作成功！\n");
				return head;
			}
			p=p->next;
			q=q->next;
		}
	}
}
//显示函数
struct node *display(struct node *head)
{
	struct node *p1,*p2;
	char name[30];
	int m;
	if(head==NULL)
	{
		printf("通讯录为空,无法显示!\n");
		return head;
	}
	p1=head;
	m=0;
	printf("请输入需要显示人的姓名:");
	gets(name);
	while(p1!=NULL)
	{
		while((strcmp(p1->name,name))!=0 && p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(strcmp(p1->name,name)==0)
		{
			m++;
			printf("%s的通讯内容如下:\n",name);
			printf("---姓名--------职业--------手机-------QQ-------Email------通讯地址\n");
			printf("==================================================================\n");
			printf("== %s",p1->name);printf("       ");
			printf("%s",p1->work);printf("       ");
			printf("%s",p1->phone);printf("       ");
			printf("%s", p1->QQ); printf("       ");
			printf("%s",p1->email);printf("       ");
			printf("%s",p1->address); printf("       \n");
			printf("==================================================================\n");
		}
		p1=p1->next;
	}
	if(m==0)
	{
		printf("此人未在本通讯录中!\n");
	}
	return(head);
}
 
//排序函数
struct node *paixu(struct node *head)
{
	struct node *p1,*p2;
	int i,j;
	struct node1
	{
		char name[30];
		char work[30];
		char phone[30];
		char QQ[20];
		char email[30];
		char address[30];
	};
	struct node1 px[200];
	struct node1 temp;
	if(head==NULL)
	{
		printf("通讯录为空,无法排序!\n");
		return(head);
	}
	p1=head;
	for(i=0;i<ID,p1!=NULL;i++)
	{
		strcpy(px[i].name,p1->name);
		strcpy(px[i].work,p1->work);
		strcpy(px[i].phone,p1->phone);
		strcpy(px[i].QQ, p1->QQ);
		strcpy(px[i].email,p1->email);
		strcpy(px[i].address,p1->address);
		p2=p1;
		p1=p1->next;
	}
	head=shifang(head);
	for(j=0;j<ID-1;j++)
	{
		for(i=j+1;i<ID;i++)
		{
			if(strcmp(px[i].name,px[j].name)<0)
			{
				temp=px[i];
				px[i]=px[j];
				px[j]=temp;
			}
		}
	}
	p1=(struct node *)malloc(LEN);
	p2=p1;
	strcpy(p1->name,px[0].name);
	strcpy(p1->work,px[0].work);
	strcpy(p1->phone,px[0].phone);
	strcpy(p1->QQ, px[0].QQ);
	strcpy(p1->email,px[0].email);
	strcpy(p1->address,px[0].address);
 
	head=p1;
	for(i=1;i<ID;i++)
	{
		p1=(struct node *)malloc(LEN);
		strcpy(p1->name,px[i].name);
		strcpy(p1->work,px[i].work);
		strcpy(p1->phone,px[i].phone);
		strcpy(p1->QQ, px[i].QQ);
		strcpy(p1->email,px[i].email);
		strcpy(p1->address,px[i].address);
		p2->next=p1;
		p2=p1;
	}
	p2->next=NULL;
	printf("按姓名排序后为:\n");
	print(head);
	return(head);
}
//姓名查找函数
struct node *search(struct node *head)
{
	struct node *p1,*p2;
	int m;
	char name[30];
	if(head==NULL)
	{
		printf("通讯录为空,无法分类查找!\n");
		return(head);
	}
	p1=head;
	printf("********************\n");
	printf("**  请输入需要查找的姓名  **\n");
	printf("********************\n");
	m=0;
	gets(name);
	while(p1!=NULL)
	{
		while(strcmp(p1->name,name)!=0&&p1->next!=NULL)
		{
			p2=p1;
			p1=p1->next;
		}
		if(strcmp(p1->name,name)==0)
		{
			m++;
			printf("你查找的内容是:\n");
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("++ %s        %s       %s       %s       %s        %s\n",p1->name,p1->work,p1->phone,p1->QQ,p1->email,p1->address);
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		}
		p1=p1->next;
 
		if(m==0)
		{
			printf("此人未在本通讯录中!\n");
		}
		break;
	}
 
	return(head);
}
 
//释放内存函数
struct node *shifang(struct node *head)
{
	struct node *p1;
	while(head!=NULL)
	{
		p1=head;
		head=head->next;
		free(p1);
	}
	return(head);
}
 
//文件写入函数
void save(struct node *head)
{
	FILE *fp;
	struct node *p1;
	if(head==NULL)
	{
		printf("通讯录为空,无法存储!\n");
		return;
	}
	fp=fopen("stuInfo.txt","w");
	if(fp==NULL)
	{
		printf("cannot open file\n");
		return;
	}
	p1=head;
	fprintf(fp,"姓名    职业      手机     QQ        Email     通讯地址\n");
	for(;p1!=NULL;) 
	{
		fprintf(fp,"%s       %s       %s        %s        %s       %s\n",p1->name,p1->work,p1->phone,p1->QQ,p1->email,p1->address);
		p1=p1->next;
	}
	printf("保存完毕!\n");
	fclose(fp);
}
 
//文件读出函数
struct node *load(struct node *head)
{
	FILE *fp;
	char tong[30];
	struct node *p1,*p2;
	fp=fopen("stuInfo.txt","r");
	if(fp==NULL)
	{
		printf("此通讯录名不存在,无法输出!\n");
		return(head);
	}
	else
	{
		head=shifang(head);
	}
	p1=(struct node *)malloc(LEN);
	fscanf(fp,"%s%s%s%s%s%s",&p1->name,&p1->work,&p1->phone,&p1->QQ,&p1->email,&p1->address);
	if(feof(fp)!=0)
	{
		printf("文件为空,无法打开!\n");
		return(head);
	}
	else
	{
		rewind(fp);
		p2=p1;
		head=p1;
		ID=0;
		while(feof(fp)==0)
		{
			fscanf(fp,"%s%s%s%s%s%s",&p1->name,&p1->work,&p1->phone,p1->QQ,&p1->email,&p1->address);
			if(feof(fp)!=0)
				break;
			p2->next=p1;
			p2=p1;
			p1=(struct node *)malloc(LEN);
			ID++;
		}
		p2->next=NULL;
		p1=head;
		head=head->next;
		ID=ID-1;
		free(p1);
		print(head);
		printf("打开完毕!\n");
		return(head);
	}
	fclose(fp);
}
 
//综合操作函数
struct node *select(struct node *head)
{
	char num[10];
	while(1)
	{
		printf("*********************\n");
		printf("*** 1 姓名查找      ****\n");
		printf("*** 2 单个显示      ****\n");
		printf("*** 3 增加          ****\n");
		printf("*** 4 退出          ****\n");
		printf("*********************\n");
		printf("请输入您选择的操作:");
		gets(num);
		switch(*num)
		{
		case '1':
			{
				head=search(head);                          //姓名查找
				print(head);
			}
			break;
		case '2':
			{
				head=display(head);                          //显示
			}
			break;
		case '3':
			{
				head=insert(head);                           //增加
				print(head);
			}
			break;
		case '4':
			return head;
		default:
			printf("操作错误，此项不存在!\n");
			break;
		}
		if(strcmp(num,"6")==0)
			break;
	}
	return head;
}
void menu()
{
	printf("********************************************\n");
	printf("***		1 创建通讯录            ****\n");
	printf("***		2 按名字排序            ****\n");
	printf("***		3 综合操作(查找,增加)   ****\n");
	printf("***		4 保存                  ****\n");
	printf("***		5 打开		        ****\n");
	printf("***		6 删除			****\n");
	printf("***		7 生成数据报表		****\n");
	printf("***		8 统计人数		****\n");
	printf("***		9 退出			****\n");
	printf("********************************************\n");
	printf("请输入您选择的操作:");
}

void choose()
{
	struct node *head = NULL;
	int num = 0;
	while (1)
	{
		menu();
		scanf("%d", &num);
		switch (num)
		{
		case  1:
		{
				   if (head == NULL)
				   {
					   head = creat();                                //创建
					   //print(head);
				   }
				   else
				   {
					   head = shifang(head);
					   head = creat();                                //重新创建
					   //print(head);
				   }
		}
			break;
		case  2:
		{
				   head = paixu(head);                               //排序
		}
			break;
		case  3:
		{
				   head = select(head);                              //综合操作
		}
			break;
		case  4:
		{
				   save(head);                                   //文件保存
				   //print(head);
		}
			break;
		case  5:
		{
				   head = load(head);                              //文件输出
		}
			break;
		case  6:
		{
				   head = delete_txl(head);                           //删除
				   //print(head);
		}
			break;
		case  7:
		{
				   print(head);                              //生成数据报表
		}
			break;
		case  8:
		{
				   printf("通讯录人数为:%d\n", ID);                              //统计通讯录人数
		}
			break;
		case  9:
			head = shifang(head);
			exit(1);
		default:
			printf("操作错误，此项不存在!\n");
			break;
		}
		system("cls");
	}
}
//主函数
void main()
{
	int flag = 0;
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
	printf("*=*               程序说明                *=*\n");
	printf("*=*    请及时保存创建完毕的通讯录内容!    *=*\n");
	printf("*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
	while (1)
	{
		system("pause");
		system("cls");
		//输出界面
		printf("\n\n\t\t\t通讯录管理系统\n\n");

		printf("\t\t\t1:注册\n");
		printf("\t\t\t2:登录\n");
		printf("\t\t\t0:退出\n\n");

		//输入功能编号
		printf("\t\t请选择功能编号：");
		scanf("%d", &flag);

		//判断
		switch (flag)
		{
			case 1:
				{
					  regist();
					  break;
				}
			case 2:
				{
					  if (judge() == 1)
					  {
						  log_in();
						  choose();
					  }
					  break;
				}
			case 0:
				{
					  exit(1);
					  break;
				}
			default:
				printf("\n\t\t您输入的功能编号有误，请重新输入！\n");
		}

	}

}