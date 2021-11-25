// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include <cstring>
using namespace std;
char tool[100] = { 0 };
char* insert(char* string, char c) {
	int aa;
	aa = strlen(string);
	for (int i = 0; i <= aa; i++,string++)
	{
		int j = 0;
		char TOOL = *string;
		if (c > TOOL&&i<aa)tool[i] = TOOL;
		if (c <= TOOL && j == 0) { tool[i] = c; j++; string--; }
		if (c <= TOOL&& j == 1) tool[i] = TOOL;
	}
	cout << tool;
	char* P = tool;
	return tool;
}
int main()
{
	char a[4] = { 'a','b','d','e'};
	char ac = 'c';
	char* pp;
	pp=insert(a, ac);
	int T = strlen(a) + 1;
	for (int i = 0; i < T; i++,pp++)
	{
		char tooler = *pp;
		cout << tooler << endl;
	}
}
/*#include<stdio.h>
#include<iostream>
using namespace std;
int main(void) {
	char a[] = { '5', '1', '3', '5', '1', '2', '5', '7','a','b','-' };
	char* p = a;
	for (p; *p != '-';) {
		char tool = *p++;
		//printf("%d\n", tool);
		cout << tool<<endl;
	}
	//	while(*p!=-1){
	//		printf("%d\n",*p++);
	//	}
	return 0;
}*/
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
