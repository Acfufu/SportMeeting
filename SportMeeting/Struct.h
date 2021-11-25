#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3 //参与运动会的学院数目
//定义一个结构体
typedef struct Playersore   //运动员参加的项目名称、成绩、名次
{
    char xiangmu[40];     //比赛项目名称
    int result;           //成绩
    char mingci[40];      //名次
} Plays;

typedef struct Playerinfor
{
    char name[40];    //运动员姓名
    char bianhao[40]; //运动员编号
    int sex;          //运动员性别：男为1，女为2；
    int sum;          //运动员参加的项目数目
    int playsore;     //运动员的项目分数
} Playeri;

typedef struct Event
{
    char item[40];      //项目名称

}event;
typedef struct Team
{
    char xueyuan[40];   //学院
    char xi[40];        //系
    char grade[40];     //年级
    char teamname[40];  //团队名称
    int rank;           //总排名
    struct Playerinfor playerinfor[40];//运动员人数
}team;


char tip[20] = "TeamInfor.txt";
char pip[20] = "TeamInfor.txt";
char oip[20] = "OrderInfor.txt";
char eip[20] = "EventInfor.txt";



void Menu();//校运动会项目管理系统的菜单
void initAll();//初始化结构体
void input();//录入信息
void search();//查询信息
void change();//更改信息
void file();//保存和读入信息
void exit();//实现保存、关闭文件并退出
int main()
{
    int item, n;                      //item用于接收输入的命令，n用于接收输入的项目数
    do
    {
        Menu(); //菜单
        initAll();//初始化结构体
        printf("请输入相应的数字，进行相应的操作:\n");
        scanf("%d", &item);
        system("cls");
        switch (item)
        {
            case 1:
                printf("请输入您要录入的项目数目:");
                scanf("%d", &n);
                input(); //创建项目链表节点
                getchar();
                printf("\n请按任意键返回主菜单\n");
                getchar();
                system("cls");
                break;
            case 2:
                search(); //查找项目的相关信息
                getchar();
                printf("\n请按任意键返回主菜单\n");
                getchar();
                system("cls");
                break;
            case 3:
                change(); //修改项目信息
                getchar();
                printf("\n请按任意键返回主菜单\n");
                getchar();
                system("cls");
                break;
            case 4:
                file();//保存和读入文件信息
                getchar();
                printf("\n请按任意键返回主菜单\n");
                getchar();
                system("cls");
                break;
            case 0:
                printf("即将退出校运动会项目管理系统....."); //退出校运动会项目管理系统
                exit(0);
            default:
                printf("您输入的指令不正确，请重新输入");
        }
        printf("\n\n");
    } while (item);
    return 0;
}
//校运动会项目管理系统的菜单
void Menu()
{
    printf("\n\n");
    printf("\t\t\t===================校运动会项目管理系统==================\n");
    printf("\t\t\t*                                                       *\n");
    printf("\t\t\t*          1>. 录入运动会项目信息                       *\n");
    printf("\t\t\t*          2>. 查找信息                   *\n");
    printf("\t\t\t*          3>. 修改信息                   *\n");
    printf("\t\t\t*          4>. 保存和读入文件信息                  *\n");
    printf("\t\t\t*          0>. 退出管理系统                             *\n");
    printf("\t\t\t*                                        欢迎使用本系统!*\n");
    printf("\t\t\t=========================================================\n");
    printf("\t\t\t输入选项，按回车进入选项:                                \n");
}
