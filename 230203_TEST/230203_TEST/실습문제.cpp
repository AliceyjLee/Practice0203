#include<iostream>
#include<string>

int main() {

	//std::string city[5] = { "�̱�", "�߱�", "����", "�Ϻ�", "ĥ��" };
	//
	//for (int i = 0; i < 5; i++) {
	//	std::cout << city[i] << std::endl;
	//}

	int grade[5];
	double sum = 0.0;

	for (int i = 0; i < 5; i++) {
		std::cout << i + 1 << "�� �л��� ������ �Է��ϼ���. ->" << std::endl;
		std::cin >> grade[i];
		sum += grade[i];
	}
	std::cout << "���� ��� :" << sum / 5.0 << std::endl;
}