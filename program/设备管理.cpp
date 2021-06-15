#include<stdio.h>
#include<string.h>
using namespace std;
#define n 4		//4类设备
#define m 10	//10个设备
struct
{
	char type[10];	//设备类名
	int count ;		//拥有设备台数
	int remain;		//现存的可用设备台数
	int address;	//该类设备在设备表中的起始地址
}equiptype[n];		//设备类表定义,假定系统有n个设备类型

struct
{
	int number;		//设备绝对号
	int status;		//设备好坏状态
	int remain;		//设备是否已分配
	char jobname[4];//占有设备的作业名
	int lnumber;	//设备相对号
}equipment[m];		//设备表定义,假定系统有m个设备

void allocate(char J[],char type[],int mm)
{
	int i,t;
	//查询该类设备
	i=0;
	while(i<n&&strcmp(equiptype[i].type,type)!=0)
		i++;
	if(i>=n)//没有找到该类设备
	{
		printf("If there is no such device, the device allocation fails");
		return;
	}
	if(equiptype[i].remain<1)//所需设备现存可用台数不足
	{
		printf("Insufficient equipment of this type, allocation failed");
		return;
	}
	t=equiptype[i].address;//取出该类设备在设备表中的起始地址
	while(!(equipment[t].status==1&&equipment[t].remain==0))
		t++;
	//填写作业名、相对号，状态改为已分配
	equiptype[i].remain--;
	equipment[t].remain=1;
	strcpy(equipment[t].jobname,J);
	equipment[t].lnumber=mm;
	printf("The equipment is allocated successfully");
}

void reclaim(char J[],char type[])
{
	int i,t,j,k,nn;
	i=0;
	while(i<n&&strcmp(equiptype[i].type,type)!=0)
		i++;
	if(i>=n)//没有找到该类设备
	{
		printf("No such equipment, equipment recycling failed");
		return;
	}
	t=equiptype[i].address;	//取出该类设备在设备表中的起始地址
	j=equiptype[i].count;	//取出该类设备的数量
	k=0;
	nn=t+j;
	for(;t<nn;t++)
		if(strcmp(equipment[t].jobname,J)==0&&equipment[t].remain==1)
		{
			equipment[t].remain=0;
			strcpy(equipment[t].jobname," ");
			equipment[t].lnumber=0;
			equiptype[i].remain++;
			k++;
			printf("The first device of this type occupied by the operation was successfully recovered\n");
			break;
		}
	if(k==0)
		printf("The job did not use this type of equipment\n");
}
int main()
{
	char J[4];
	int i,mm,a;
	char type[10];
	//设备类表初始化
	strcpy(equiptype[0].type,"input");//输入机
	equiptype[0].count=2;
	equiptype[0].remain=2;
	equiptype[0].address=0;
	strcpy(equiptype[1].type,"printer");//打印机
	equiptype[1].count=3;
	equiptype[1].remain=3;
	equiptype[1].address=2;
	strcpy(equiptype[2].type,"disk");//磁盘机
	equiptype[2].count=4;
	equiptype[2].remain=4;
	equiptype[2].address=5;
	strcpy(equiptype[3].type,"tape");//磁带机*/
	equiptype[3].count=1;
	equiptype[3].remain=1;
	equiptype[3].address=9;
	//设备表初始化
	for(i=0;i<10;i++)
	{
		equipment[i].number=i;
		equipment[i].status=1;
		equipment[i].remain=0;
	}
	while(1)
	{
		printf("\n0-exit, 1-allocate, 2-recycle, 3-display");
		printf("\nSelect function item (0－3):");
		scanf("%d",&a);

		switch(a)
		{
		case 0://程序结束*/
			return 0;
		case 1://a=1分配设备
			printf("Enter the job name, device class and relative device number required for the job");
			scanf("%s%s%d",J,type,&mm);
			allocate(J,type,mm);
			break;
		case 2://a=2回收设备
			printf("Enter the job name and the type of equipment returned by the job");
			scanf("%s%s",J,type);
			reclaim(J,type);
			break;
		case 3://a=3输出设备类表和设备表的内容
			printf("\nOutput device class table\n");
			printf("Type of equipment Total amount of equipment Idle good equipment\n");
			for(i=0;i<n;i++)
				printf("%9s%6d%9d\n",equiptype[i].type,equiptype[i].count,equiptype[i].remain);
			printf("Output device table:\n");
			printf("Absolute number Good/bad Already/unallocated Occupied job name Relative number\n");
			for(i=0;i<m;i++)
				printf("%3d%8d%9d%12s%8d\n",equipment[i].number,
				equipment[i].status,equipment[i].remain,equipment[i].jobname,
				equipment[i].lnumber);
		}
	}
}
