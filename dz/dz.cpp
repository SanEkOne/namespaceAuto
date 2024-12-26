#include <iostream>
#include <string>

using namespace std;

namespace First {
	class Auto {
	private:
		string brand;
		int year;

	public:
		Auto(const string& brand, int year){
			this->brand = brand;
			this->year = year;
		}

		void PrintInfo() const {
			cout << "Brand: " << brand << endl << "Year: " << year << endl;
		}
	};
}

namespace Second {
	class Auto {
	private:
		string brand;
		int year;

	public:
		Auto(const string& brand, int year) {
			this->brand = brand;
			this->year = year;
		}

		void PrintInfo() const {
			cout << "Brand: " << brand << endl << "Year: " << year << endl;
		}
	};
}

int main()
{
	First::Auto obj("Audi", 2024);
	Second::Auto obj2("BMW", 2020);
	obj2.PrintInfo();
}
