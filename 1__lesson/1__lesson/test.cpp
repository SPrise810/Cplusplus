//C++上50节课，150小时
//我们要讲三个部分的内容
//1. C++语法  2.高阶数据结构   3.STL
//数据结构当前学的 只是初阶的数据结构
//一些复杂的数据结构 用C语言写 可能要200行，C++用100行
//用C++更容易实现
//C++很重要的东西是STL，非常重要 STL又分为两层，学它的底层，学它的应用
//我们会进行模拟实现STL

//C++的发展历史

//汤神会开python训练营

//我们学完适合后台开发领域： 简单说一下，我们用微信 美团，需要wifi才能用，数据都会存在网络服务器
//我们会做 缓存 网络 数据库 ，即服务端开发，这是我们最适合的岗位
//还有一些 游戏的服务器开发  嵌入式开发领域  
//不能做 人工智能
//人工智能领域 重点不是语言，而是深度学习算法，以高数 微积分 线性代数为基础
//要搞人工智能最好找个好学校 还要数学好  还要看论文
//

///从lesson8开始会进行笔试强训  总共8周  每周12个题 2算法+10选择

//10分难度，比特有8.5~9.0难度
//我们会讲的很深

//写博客写博客写博客+写作业  非常重要

//C++入门  
//C++兼容C语言

//#include<stdio.h>
//
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//正宗hello world
/*#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
}
*/
//1.命名空间 
//C++增加了很多命名，防止命名冲突
//命名冲突：
/*include<stdio.h>
//#include<stdlib.h>
//
//int rand = 0;
//int main()
//{
//	printf("%d", rand);
//	return 0;
//}
//错误	C2365	“rand” : 重定义；以前的定义是“函数”	1__lesson	D : \Cplusplus\1__lesson\1__lesson\test.cpp	54
//报错了
*/
//C++为了解决这个问题，提出了命名空间这个概念，新增了一个关键字namespace

/*#include<stdio.h>
#include<stdlib.h>
//定义的是一个命名空间域 
namespace bit
{ 
	int rand = 0;//不报错了
}
int main()
{
	printf("%p", rand);
	printf("%p", bit::rand);

	return 0;
}
*/
//我们在C语言当中就学习过，在不同的域中可以进行 同名称变量的定义
//例如
/*#include<stdio.h>
int a = 0;//全局域
int main()
{
	int a = 1;//局部域
	printf("%d\n", a);//打印出1， 就近原则，局部优先
	//想要访问全局域的a
	//使用符号 “::”,域作用限定符 
	printf("%d\n", ::a);//打印出1， 就近原则，局部优先
	//  地点::变量   如果::左侧为空白，则默认为全局域 
	return 0;
}
*/
//所以命名空间是用来 命名隔离的，防止命名冲突

//命名空间除了定义变量还能 定义 函数 和 类型
/*
#include<stdio.h>
#include<stdlib.h>
namespace sprise
{ 
	int rand = 0;
	void func()
	{
		printf("func()\n");
	}
	struct TreeNode
	{
		struct TreeNode* left;
		struct TreeNode* right;
		int val;
	};
}
int main()
{
	printf("%p", rand);
	printf("%p", sprise::rand);
	sprise::func();
	struct sprise::TreeNode node;
	return 0;
}*/
//命名空间也能够嵌套









