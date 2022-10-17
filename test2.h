#include<string>
#ifndef STUDENT
#define STUDENT
using namespace std;
//以学生各项成绩定义一个类
class ChineseGrade
{
private:
    int CNscore;
public:
    void Chinese(int c)
    {
        CNscore=c;
    }
    void showChinese()
    {
        cout<<CNscore<<endl;
    }
};
class MathGrade
{
private:
    int Mascore;
public:
    void Math(int m)
    {
        Mascore=m;
    }
    void showmath()
    {
        cout<<Mascore<<endl;
    }
};
class student:public ChineseGrade,public MathGrade
{
private:
    string name;
    int total;
public:
    student(int c,int m,string n)
    {   
        Chinese(c);
        Math(m);
        name=n;
        total=c+m;
    }
    void show()
    {
        cout<<name<<endl;
        showChinese();
        showmath();
        cout<<total<<endl;
    }
};
//子类学生继承学生成绩
#endif