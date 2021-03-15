//Time类
#include<iostream>
using namespace std;
class Time {
public:
	Time();
	Time(int h, int m , int s):hour(h),minute(m),second(s) { }//参数初始化表（方法三）
	void set_time();
	void show_time();
private:
	int hour;
	int minute;
	int second;
};

 Time::Time()  //初始化赋值（方法一）
{
	hour = 0;
	minute = 0;
	second = 0;
}
//Time::Time(int h,int m,int s)//初始化赋值，带参数，更加灵活 p75（方法二）
//{
//	hour = h;
//	minute = m;
//	second = s;
//}

 //16行与31行 函数重载，函数名相同，但参数类型不同

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