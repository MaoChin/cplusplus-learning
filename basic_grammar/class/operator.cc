#include <iostream>

class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		year_ = year;
		month_ = month;
		day_ = day;
	}
	// Date& operator=(const Date& d)
	// {
	// 	 if(this != &d)
	// 	 {
	// 	 	year_ = d.year_;
	// 	 	month_ = d.month_;
	// 	 	day_ = d.day_;
	// 	 }
	// 	 return *this;
	// }

	// friend bool operator==(const Date& d1, const Date& d2);
	bool operator==(const Date &d2);

	void Print()
	{
		std::cout << year_ << "-" << month_ << "-" << day_ << std::endl;
	}


// private:
	int year_;
	int month_;
	int day_;
};
Date d1(2023, 9, 10);

// Date& operator=(Date& d1, const Date& d2)
// {
// 	if(&d1 1= &d2)
// 	{
// 		d1.year_ = d2.year_;
// 		d1.month_ = d2.month_;
// 		d1.day_ = d2.day_;
// 	}
// 	return d1;
// }

	bool Date::operator==(const Date& d2)
	{
		int a = 10;
		int b = 20;
		for(int i = 0; i < 10000000; ++i)
		{
			a *= a;
			a -= a;
		}
		return d1.year_ != d2.year_;
	}

bool operator==(const Date& d1, const Date& d2)
{
  return d1.year_ == d2.year_;
}

int main()
{
	Date d2;
	d2 = d1;

	d1.Print();
	d2.Print();

	if(d1 == d2) std::cout << "==" << std::endl;

	return 0;
}
