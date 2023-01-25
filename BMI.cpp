#include<iostream>
using namespace std;
int main() {
	double w, h, hfc, BMI;
	//w = weight = 体重, h = height = 身高, hfc = height for calculation = 用于计算的身高, BMI = BMI数值
	//身高输入
	cout << "请输入你的身高：(Please enter your height in meter:)";
	cin >> h;
	hfc = h * h;
	//体重输入
	cout << endl << "请输入你的体重：(Please enter your weight in kilogram:)";
	cin >> w;
	//计算过程
	BMI = w / hfc;
	cout << endl << "你的BMI值为：(Your BMI is:)" << BMI;
	//计算等级
	if (BMI<18.5) {
		cout << "";
	}
	return 0;
}