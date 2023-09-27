#include<iostream>
using namespace std;

class Time
{
    private:
        int h;//h=hr
        int m;//m=min
        int s;//s=sec
    public:
        Time()
        {
            this->h=0;
            this->m=0;
            this->s=0;
        }
        Time(int h,int m,int s)
        {
            this->h=h;
            this->m=m;
            this->s=s;
        }
        int getHour()
        {
            return this->h;
        }
        int getMinute()
        {
            return this->m;
        }
        int getSec()
        {
            return this->s;
        }
        void setHour(int h)
        {
            this->h=h;
        }
        void setMin(int m)
        {
            this->m=m;
        }
        void setSec(int s)
        {
            this->s=s;
        }
        void printTime()
        {
            cout << "time is=" << h << ":" << m << ":" << s << endl;
        }
    
};
int main()
{
    Time **arr=new Time *[3];

    arr[0]=new Time(10,5,15);
    arr[1]=new Time(15,5,20);
    arr[2]=new Time(20,5,5);

    for(int i=0;i<3;i++)
    {
       arr[i]->printTime();
    }
    for(int i=0;i<3;i++)
    {
        delete arr[i];
    }
    delete[] arr;
    return 0;
}