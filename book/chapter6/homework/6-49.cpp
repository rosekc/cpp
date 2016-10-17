/*******************************
�������ҵ�һ��дע�͵ĳ���������
���Ǵ�ѧѧC++�Ǳ���Ľ�6-49��һ����
������Ծ��Ǹ�����������ӶĲ�����Ϸ
********************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
//����������
int rollDice();//ҡ����
bool game();//��Ϸ������
string talk(int);//�洢�Ի�
void talking();//���жԻ�

//ȫ�ֱ���������
enum Status {CONTINUE,WON,LOST};//������Ϸ��״̬����Щ
int myPoint;//�Ƿ�
Status gameStatus;//�����洢��Ϸ״̬�ı���
int bankBalance;//�Ľ�
int bankBalance0;//��һ�εĶĽ����ڶԻ�
int wintimes;//����Ӯ�Ĵ���
int losttimes;//������Ĵ���
int wager;//��ע

//�������������˸���Ϸ�Ĵ�żܹ�
int main()
{
    bool g;//�洢һ����Ϸ������Ӯ��״̬��true��Ӯ
    string p;//�洢yes��no�������Ƿ������Ϸ
    bankBalance=1000;//�Ľ��ʼ��
    wintimes=0;//����Ӯ�Ĵ�����ʼ��
    losttimes=0;//������Ĵ�����ʼ��
    //��������Ϸ��ŵļܹ�
    while(1)
    {
        g=game();//����Ϸ
        //��һ����Ϸ�Ľ�����д���
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
        //����Ľ�û���˵����
        if(bankBalance<=0)
        {
            cout<<"Sorry. You busted!"<<endl
                <<"Would you like to play again(y or n)?";//�����治��
            while(1)//��ֹ����yes��no����Ķ���
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
                //���˻�������ȳ�ʼ��
                bankBalance=1000;
                wintimes=0;
                losttimes=0;
            }
            else if(p=="N" || p=="n")
            {
                break;//���˲������Ǿ��˳�
            }
        }
        //����Ľ�û�ܹ�����
        else
        {
            talking();//������һ�εĶĽ��Ŀǰ�Ľ�ıȽϣ�����������Ӯ�Ĵ������жԻ�
            cout<<"Would you like to continue to play(y or n)?";//�����治��
            while(1)//��ֹ����yes��no����Ķ���
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
                //�����棬������һ����Ӯ�ˣ�����ûɶ�ô����
            }
            else if(p=="N" || p=="n")
            {
                break;//�����˵�Ȼ���˳���
            }
        }
    }
    return 0;
}
int rollDice()
{
    //��������Ϸҡ���ӣ����۲�����
    int die1=1+rand()%6;
    int die2=1+rand()%6;
    int sum=die1+die2;
    cout<<"Player rolled "<<die1<<" + "<<die2
        <<" = "<<sum<<endl;
    return sum;
}
bool game()//��Ϸ����
{
    cout<<"Your bankBalance is: "<<bankBalance<<endl;//�ȸ����㻹�ж��ٿ��԰�
    cout<<"Please enter your wager: ";//Ȼ��������ѡ��Ҫ�ܶ���
    while(1)//��ֹ���̫�࣬��������
    {
        cin>>wager;
        if(bankBalance>=wager)
        {
            break;
        }
        cout<<"Error: your wager is bigger than your bankBalance!\n"
            <<"Please enter your wager again: ";
    }
    srand(time(0));//���һ��
    int sumOfDice=rollDice();//������ӵ����
    switch(sumOfDice)//������Ӯ���Ǽ����㣬���۲�����
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
    while(gameStatus==CONTINUE)//һ��Ҫ�ֳ�ʤ�������۲�����
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
    if(gameStatus==WON)//Ӯ�˵����
    {
        cout<<"Player wins"<<endl;
        wintimes++;
        losttimes=0;
        return true;
    }
    else//���˵����
    {
        cout<<"Player loses"<<endl;
        wintimes=0;
        losttimes++;
        return false;
    }
}
string talk(int x)//�洢�Ի�
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
void talking()//���жԻ�
{
    if(bankBalance*2<=bankBalance0)//��������һ��
    {
        cout<<talk(1);
        return;
    }
    if(bankBalance>=bankBalance0*2)//Ӯ����������
    {
        cout<<talk(3);
        return;
    }
    if(losttimes==5)//��������
    {
        cout<<talk(1);
        return;
    }
    if(wintimes==5)//��Ӯ����
    {
        cout<<talk(3);
        return;
    }
    if(losttimes==3 || wintimes==3)//��Ӯ����������
    {
        cout<<talk(2);
        return;
    }
}
