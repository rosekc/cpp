/*******************************
这大概是我第一个写注释的程序纪念纪念
这是大学学C++那本书的叫6-49的一道题
具体而言就是个外国的用骰子赌博的游戏
********************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
//函数声明区
int rollDice();//摇骰子
bool game();//游戏的主体
string talk(int);//存储对话
void talking();//进行对话

//全局变量声明区
enum Status {CONTINUE,WON,LOST};//声明游戏的状态有哪些
int myPoint;//记分
Status gameStatus;//声明存储游戏状态的变量
int bankBalance;//赌金
int bankBalance0;//上一次的赌金，用于对话
int wintimes;//连续赢的次数
int losttimes;//连续输的次数
int wager;//赌注

//主函数，包括了该游戏的大概架构
int main()
{
    bool g;//存储一局游戏最终输赢的状态，true是赢
    string p;//存储yes和no，用于是否继续游戏
    bankBalance=1000;//赌金初始化
    wintimes=0;//连续赢的次数初始化
    losttimes=0;//连续输的次数初始化
    //以下是游戏大概的架构
    while(1)
    {
        g=game();//玩游戏
        //对一局游戏的结果进行处理
        if(g)
        {
            bankBalance0=bankBalance;
            bankBalance+=wager;
            cout<<"Your bankBalance is: "<<bankBalance<<endl;
        }
        else
        {
            bankBalance0=bankBalance;
            bankBalance-=wager;
            cout<<"Your bankBalance is: "<<bankBalance<<endl;
        }
        //处理赌金没有了的情况
        if(bankBalance<=0)
        {
            cout<<"Sorry. You busted!"<<endl
                <<"Would you like to play again(y or n)?";//处理还玩不玩
            while(1)//防止输入yes和no以外的东西
            {
                cin>>p;
                if(p=="Y" || p=="y" || p=="N" || p=="n")
                {
                    break;
                }
                cout<<"Error: you enter some wrong characters!\n"
                    <<"Would you like to play again(y or n)?";
            }
            if(p=="Y" || p=="y")
            {
                //输了还想玩得先初始化
                bankBalance=1000;
                wintimes=0;
                losttimes=0;
            }
            else if(p=="N" || p=="n")
            {
                break;//输了不玩了那就退出
            }
        }
        //处理赌金还没败光的情况
        else
        {
            talking();//根据上一次的赌金和目前赌金的比较，或者连续输赢的次数进行对话
            cout<<"Would you like to continue to play(y or n)?";//处理还玩不玩
            while(1)//防止输入yes和no以外的东西
            {
                cin>>p;
                if(p=="Y" || p=="y" || p=="N" || p=="n")
                {
                    break;
                }
                cout<<"Error: you enter some wrong characters!\n"
                    <<"Would you like to continue to play(y or n)?";
            }
            if(p=="Y" || p=="y")
            {
                //继续玩，由于上一次是赢了，所以没啥好处理的
            }
            else if(p=="N" || p=="n")
            {
                break;//不玩了当然就退出了
            }
        }
    }
    return 0;
}
int rollDice()
{
    //以下是游戏摇骰子，蛋疼不解释
    int die1=1+rand()%6;
    int die2=1+rand()%6;
    int sum=die1+die2;
    cout<<"Player rolled "<<die1<<" + "<<die2
        <<" = "<<sum<<endl;
    return sum;
}
bool game()//游戏主体
{
    cout<<"Your bankBalance is: "<<bankBalance<<endl;//先告诉你还有多少可以败
    cout<<"Please enter your wager: ";//然后再让你选择要败多少
    while(1)//防止你败太多，就逆天了
    {
        cin>>wager;
        if(bankBalance>=wager)
        {
            break;
        }
        cout<<"Error: your wager is bigger than your bankBalance!\n"
            <<"Please enter your wager again: ";
    }
    srand(time(0));//随机一下
    int sumOfDice=rollDice();//获得骰子的情况
    switch(sumOfDice)//决定输赢还是继续搞，蛋疼不解释
    {
    case 7:
    case 11:
        gameStatus=WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOST;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"Point is "<<myPoint<<endl;
        break;
    }
    while(gameStatus==CONTINUE)//一定要分出胜负，蛋疼不解释
    {
        sumOfDice=rollDice();
        if(sumOfDice==myPoint)
        {
            gameStatus=WON;
        }
        else if(sumOfDice==7)
        {
            gameStatus=LOST;
        }
    }
    if(gameStatus==WON)//赢了的情况
    {
        cout<<"Player wins"<<endl;
        wintimes++;
        losttimes=0;
        return true;
    }
    else//输了的情况
    {
        cout<<"Player loses"<<endl;
        wintimes=0;
        losttimes++;
        return false;
    }
}
string talk(int x)//存储对话
{
    if(x==1)
    {
        return "Oh,you're going for broke,huh?\n";
    }
    else if(x==2)
    {
        return "Aw cmon, take a chance!\n";
    }
    else if(x==3)
    {
        return "You're up big. Now's the time to cash in your chips!\n";
    }
}
void talking()//进行对话
{
    if(bankBalance*2<=bankBalance0)//输了至少一半
    {
        cout<<talk(1);
        return;
    }
    if(bankBalance>=bankBalance0*2)//赢了至少两倍
    {
        cout<<talk(3);
        return;
    }
    if(losttimes==5)//连输五盘
    {
        cout<<talk(1);
        return;
    }
    if(wintimes==5)//连赢五盘
    {
        cout<<talk(3);
        return;
    }
    if(losttimes==3 || wintimes==3)//连赢或连输三盘
    {
        cout<<talk(2);
        return;
    }
}
