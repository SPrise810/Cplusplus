//C++��50�ڿΣ�150Сʱ
//����Ҫ���������ֵ�����
//1. C++�﷨  2.�߽����ݽṹ   3.STL
//���ݽṹ��ǰѧ�� ֻ�ǳ��׵����ݽṹ
//һЩ���ӵ����ݽṹ ��C����д ����Ҫ200�У�C++��100��
//��C++������ʵ��
//C++����Ҫ�Ķ�����STL���ǳ���Ҫ STL�ַ�Ϊ���㣬ѧ���ĵײ㣬ѧ����Ӧ��
//���ǻ����ģ��ʵ��STL

//C++�ķ�չ��ʷ

//����Ὺpythonѵ��Ӫ

//����ѧ���ʺϺ�̨�������� ��˵һ�£�������΢�� ���ţ���Ҫwifi�����ã����ݶ���������������
//���ǻ��� ���� ���� ���ݿ� ��������˿����������������ʺϵĸ�λ
//����һЩ ��Ϸ�ķ���������  Ƕ��ʽ��������  
//������ �˹�����
//�˹��������� �ص㲻�����ԣ��������ѧϰ�㷨���Ը��� ΢���� ���Դ���Ϊ����
//Ҫ���˹���������Ҹ���ѧУ ��Ҫ��ѧ��  ��Ҫ������
//

///��lesson8��ʼ����б���ǿѵ  �ܹ�8��  ÿ��12���� 2�㷨+10ѡ��

//10���Ѷȣ�������8.5~9.0�Ѷ�
//���ǻὲ�ĺ���

//д����д����д����+д��ҵ  �ǳ���Ҫ

//C++����  
//C++����C����

//#include<stdio.h>
//
//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//����hello world
/*#include<iostream>
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
}
*/
//1.�����ռ� 
//C++�����˺ܶ���������ֹ������ͻ
//������ͻ��
/*include<stdio.h>
//#include<stdlib.h>
//
//int rand = 0;
//int main()
//{
//	printf("%d", rand);
//	return 0;
//}
//����	C2365	��rand�� : �ض��壻��ǰ�Ķ����ǡ�������	1__lesson	D : \Cplusplus\1__lesson\1__lesson\test.cpp	54
//������
*/
//C++Ϊ�˽��������⣬����������ռ�������������һ���ؼ���namespace

/*#include<stdio.h>
#include<stdlib.h>
//�������һ�������ռ��� 
namespace bit
{ 
	int rand = 0;//��������
}
int main()
{
	printf("%p", rand);
	printf("%p", bit::rand);

	return 0;
}
*/
//������C���Ե��о�ѧϰ�����ڲ�ͬ�����п��Խ��� ͬ���Ʊ����Ķ���
//����
/*#include<stdio.h>
int a = 0;//ȫ����
int main()
{
	int a = 1;//�ֲ���
	printf("%d\n", a);//��ӡ��1�� �ͽ�ԭ�򣬾ֲ�����
	//��Ҫ����ȫ�����a
	//ʹ�÷��� ��::��,�������޶��� 
	printf("%d\n", ::a);//��ӡ��1�� �ͽ�ԭ�򣬾ֲ�����
	//  �ص�::����   ���::���Ϊ�հף���Ĭ��Ϊȫ���� 
	return 0;
}
*/
//���������ռ������� ��������ģ���ֹ������ͻ

//�����ռ���˶���������� ���� ���� �� ����
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
//�����ռ�Ҳ�ܹ�Ƕ��









