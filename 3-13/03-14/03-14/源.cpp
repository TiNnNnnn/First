//Time��
#include<iostream>
using namespace std;
class Time {
public:
	Time();
	Time(int h, int m , int s):hour(h),minute(m),second(s) { }//������ʼ������������
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int second;
};

 Time::Time()  //��ʼ����ֵ������һ��
{
	hour = 0;
	minute = 0;
	second = 0;
}
//Time::Time(int h,int m,int s)//��ʼ����ֵ����������������� p75����������
//{
//	hour = h;
//	minute = m;
//	second = s;
//}

 //16����31�� �������أ���������ͬ�����������Ͳ�ͬ

void Time::set_time()
{
	cin >> hour;
	cin >> minute;
	cin >> second;
}
void Time::show_time()
{
	cout << hour << "," <<minute<<","<<second << endl;
}
int main()
{
	Time t1;
	t1.show_time();//tset init

	t1.set_time();
	t1.show_time();

	cout << endl;

	Time t2(10, 29, 30);
	t2.show_time();//tset init

	t2.set_time();
	t2.show_time();
	return 0;
}