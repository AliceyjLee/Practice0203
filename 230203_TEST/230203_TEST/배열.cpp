#include<iostream>
#include<string>

int main() {

	//std::string friend1 = "ȫ�浿";
	//std::string friend2 = "������";

	//std::string friends[2]; // ���� ���� // ����(��������)

	//friends[0] = "ȫ�浿"; // ������ ���� // �ʱ�ȭ(���� 0���ͽ���)
	//friends[1] = "������";
	//friends[1] = "�ڵ���";

	std::string friends[2] = { "ȫ�浿", "������" }; // ���� + �ʱ�ȭ

	std::cout << friends[0]; // ȫ�浿 ���

	int nums[3] = { 1, 2, 3 };
	std::cout << nums[2]; // 3 ���

	double nums[4] = { 1.5, 2.5, 3.5 }; // ������ 4���ε� 3���� ���?
	nums[3] = 4.5; // �̷��� �Ѱ��� �� �߰� ����


	// 2���� �迭 
	std::string fruit[2][2] = { {"apple" ,"grape"} ,{"orange","banana"} };
	std::string fruit[2][3] = { {"apple" ,"grape","lemon" } ,{"orange","banana","melon" } };


	return 0;

}