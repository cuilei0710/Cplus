#include<stdio.h>
#include<iostream>
using namespace std;
#define n 10			//页的大小为2的n次方
#define m 3				//实际为该作业分配的主存块块数
#define page_length 5	//页表实际长度
struct  //页表
{
	int lnumber;	//页号
	int pnumber;	//该页所在主存块的块号
	int flag;		//状态位,"1"表示该页在主存,"0"表示该页不在主存
	int write;		//修改位,"1"表示该页内容被修改过,"0"表示该页内容末修改过
	int dnumber;	//该页存在外存位置,即磁盘块号
}page[page_length];
int p[m];			//存放在主存中页的页号
int head;			//主存中页号队列p首指针

void page_interrupt(int lnumber)  //缺页中断处理函数
{
	int j;
	cout<<"页"<<lnumber<<"Not in memory, a page fault interrupt occurs.\n";
    //淘汰页
	j=p[head];
	p[head]=lnumber;
	head=(head+1)%m;
	if(page[j].write==1)
		cout<<"Will"<<j<<"Page write back to disk"<<page[j].dnumber<<"Save in the block.\n";
	page[j].flag=0;
	page[lnumber].pnumber=page[j].pnumber;
	page[lnumber].flag=1;//第lnumber页存在标志改为"1"
	page[lnumber].write=0;//第lnumber页修改标志改为"0"
	cout<<"Eliminate main memory blocks"<<page[j].pnumber<<"Page in"<<j<<", From the disk"<<page[lnumber].dnumber<<"Page in block"<<lnumber<<"\n";
}

void command(unsigned laddress,int write)  //命令处理函数结束
{
	int paddress,ad,pnumber,lnumber;
kk:
//取出逻辑地址laddress的页号lnumber(高6位)和页内地址ad
	lnumber=laddress>>n;
	ad=laddress&0x3ff;
	if(lnumber>=page_length)
		cout<<"Exceed the page length, the page does not exist\n";
	else
	{
		if(page[lnumber].flag==1)  //页在主存
		{
			pnumber=page[lnumber].pnumber;	//从页表中取得块号
			paddress=pnumber<<n|ad;		//合并块号和块内地址形成物理地址padress
			cout<<"The logical address is:"<<laddress<<", The corresponding physical address is:"<<paddress<<"\n";
			if(write==1)
				page[lnumber].write=1;
		}
		else  //页不在主存
		{
			page_interrupt(lnumber);//缺页中断，并指令复执
			goto kk;
		}
	}
}

int main()  //主函数
{
	int write;
	unsigned laddress;
	//初始化页表，分配3个物理块。数据可改
	page[0].lnumber=0;page[0].pnumber=4;page[0].flag=1;page[0].write=0;page[0].dnumber=4;
	page[1].lnumber=1;page[1].pnumber=3;page[1].flag=1;page[1].write=0;page[1].dnumber=20;
	page[2].lnumber=2;page[2].pnumber=7;page[2].flag=1;page[2].write=0;page[2].dnumber=18;
	page[3].lnumber=3;page[3].pnumber=0;page[3].flag=0;page[3].write=0;page[3].dnumber=6;
	page[4].lnumber=4;page[4].pnumber=0;page[4].flag=0;page[4].write=0;page[4].dnumber=9;
	head=0;			//开始指向p[0]
	p[0]=0;p[1]=1;p[2]=2;  //3个物理块中所放的页为0页、1页、2页

	while(1)
	{
		cout<<"Enter the nature of the instruction (1-write instruction, 0-read instruction, other--end program operation) and logical address:";
		cin>>write;
		cin>>laddress;
		if(write==0||write==1)
			command(laddress,write);
		else
			break;
	}
}
