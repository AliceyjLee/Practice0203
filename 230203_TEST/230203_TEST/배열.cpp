//#include<iostream>
//#include<string>
//
//int main() {

	//std::string friend1 = "ȫ�浿";
	//std::string friend2 = "������";

	//std::string friends[2]; // ���� ���� // ����(��������)

	//friends[0] = "ȫ�浿"; // ������ ���� // �ʱ�ȭ(���� 0���ͽ���)
	//friends[1] = "������";
	//friends[1] = "�ڵ���";

	//std::string friends[2] = { "ȫ�浿", "������" }; // ���� + �ʱ�ȭ
	//std::cout << friends[0] << std::endl; // ȫ�浿 ���

	//int nums[3] = { 1, 2, 3 };
	//std::cout << nums[2]; // 3 ���

	//double nums[4] = { 1.5, 2.5, 3.5 }; // ������ 4���ε� 3���� ���?
	//nums[3] = 4.5; // �̷��� �Ѱ��� �� �߰� ����


	 //2���� �迭 
	//std::string fruit[2][2] = { {"apple" ,"grape"} ,{"orange","banana"} };
	//std::string fruit[2][3] = { {"apple" ,"grape","lemon" } ,{"orange","banana","melon" } };

//	std::string fruit[2][3] = {
//		{ "apple", "banana", "orange"},
//		{ "apple2", "banana2", "orange2" }
//	};
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			std::cout << fruit[i][j] << std::endl;
//		}
//	}
//
//	std::string friends[3] = { "ȫ�浿", "������", "�ڵ���"};
//	
//	for (int i = 0; i < 3; i++) {
//		std::cout << friends[i] << std::endl;
//	}
//
//	// sizeof(friends) : sizeof �ȿ� ���� or type�� ���ڷ� �Ѱ���. ũ�⸦ byte������ ����
//	// sizeof(friends -> 12 byte / sizeof(std::string) -> 3 byte (ù��° ������ ũ��)
//	for (int i = 0; i < sizeof(friends)/sizeof(std::string); i++) {
//		std::cout << friends[i] << std::endl;
//	}
//
//	for (std::string f : friends) {
//		std::cout << f << std::endl;
//	}
//
//
//	return 0;
//
//}