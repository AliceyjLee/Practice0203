#include<iostream>
#include<string>

int main() {

	//std::string friend1 = "홍길동";
	//std::string friend2 = "성춘향";

	//std::string friends[2]; // 값의 갯수 // 선언(갯수지정)

	//friends[0] = "홍길동"; // 원소의 순서 // 초기화(순서 0부터시작)
	//friends[1] = "성춘향";
	//friends[1] = "코딩온";

	std::string friends[2] = { "홍길동", "성춘향" }; // 선언 + 초기화

	std::cout << friends[0]; // 홍길동 출력

	int nums[3] = { 1, 2, 3 };
	std::cout << nums[2]; // 3 출력

	double nums[4] = { 1.5, 2.5, 3.5 }; // 갯수가 4개인데 3개만 썼다?
	nums[3] = 4.5; // 이렇게 한개를 더 추가 가능


	// 2차원 배열 
	std::string fruit[2][2] = { {"apple" ,"grape"} ,{"orange","banana"} };
	std::string fruit[2][3] = { {"apple" ,"grape","lemon" } ,{"orange","banana","melon" } };


	return 0;

}