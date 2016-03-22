#include <string>
using namespace std;
class BMI{
	public:
		BMI();
		BMI(double h,double w);
		void setHeight(double h);
		void setWeight(double w);
		double getBMI();
		string getCat();
	private:
		double hei,wei;
};
