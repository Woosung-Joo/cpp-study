#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
#pragma warning (disable : 4996)
class Smart {
	char* Model;
	char* Company;
	int PRICE;
public:
	Smart(const char* model, const char* company, int price) :PRICE(price) {
		int M_LEN = strlen(model) + 1;
		int C_LEN = strlen(company) + 1;

		Model = new char[M_LEN];
		strcpy(Model, model);
		Company = new char[C_LEN];
		strcpy(Company, company);

		cout << "인자가 3개인 생성자" << endl;
	}
	Smart() :PRICE(0) {
		Model = new char[10];
		Company = new char[10];

		strcpy(Model, "종류없음");
		strcpy(Company, "회사없음");

		cout << "인자가 1개인 생성자" << endl;
	}
	void Show() {
		cout << Model << setw(20) << Company << setw(20) << PRICE << "원" << endl;
	}
	~Smart() {
		delete[] Model;
		delete[] Company;
		cout << "소멸" << endl;
	}
};
int main() {
	Smart iphone("아이폰 8", "애    플", 950000);
	Smart samsung("갤럭시s9", "삼성전자", 890000);
	Smart no;

	iphone.Show();
	samsung.Show();
	no.Show();

}
