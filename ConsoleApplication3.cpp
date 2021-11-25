// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Clock	//鏃堕挓绫诲０鏄?
{
public:	//澶栭儴鎺ュ彛
    Clock(int NewH = 0, int NewM = 0, int NewS = 0) {
        this->Hour = NewH;
        this->Minute = NewM;
        this->Second = NewS;
    };
    void ShowTime();
    Clock operator ++();        //鍓嶇疆鍗曠洰杩愮畻绗﹂噸杞? //鍚庣疆鍗曠洰杩愮畻绗﹂噸杞?	 
    Clock operator++(int)
    {
        Clock t;
        t.Hour = Hour;
        t.Second = Second;
        t.Minute = Minute;
        Second++;
        if (Second == 60)
        {
            Second = 0;
            Minute++;
            if (Minute == 60)
            {
                Minute = 0;
                Hour++;
                Hour = Hour % 24;
            }
        }
        return t;
    }

    //+杩愮畻绗﹂噸杞?         
    Clock operator+(Clock c)
    {
        this->Second = c.Second + this->Second;
        this->Minute = c.Minute + this->Minute;
        this->Hour = c.Hour + this->Hour;
        if (Second == 60)
        {
            Second = 0;
            Minute++;
            if (Minute == 60)
            {
                Minute = 0;
                Hour++;
                Hour = Hour % 24;
            }
        }
        return *this;
    }

private:	//绉佹湁鏁版嵁鎴愬憳
    int Hour, Minute, Second;
};
Clock Clock::operator ++()
{
    ++Second;
    if (Second == 60)
    {
        ++Minute;
        if (Minute == 60)
        {
            Minute = 0;
                ++Hour;
            Hour = Hour % 24;
        }
    }
    return *this;
}

void Clock::ShowTime()
{
    cout << Hour << ":" << Minute << ":" << Second << endl;
}

int main()
{
    Clock c1(23, 59, 59), c2(5, 12, 10), c3;
    c1.ShowTime();
    c1++;
    c1.ShowTime();
    c3 = ++c2;
    c3.ShowTime();
    c3 = c2 + c1;
    c3.ShowTime();
    return 0;
}




// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
