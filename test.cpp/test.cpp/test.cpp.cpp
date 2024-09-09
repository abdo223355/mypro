

#include <iostream>
using namespace std;
class Studnet {
private:
	string name; int mark;
public:
	Studnet(string n, int m) {
		name = n;
		mark = m;
	}
	friend void sum(Studnet x, Studnet y, Studnet z);
	void check(Studnet x, Studnet y, Studnet z);
};
void sum(Studnet x, Studnet y, Studnet z)
{
	
	int sum =x.mark + y.mark + z.mark;
	cout <<"the sum of marks is " << sum << "\n";
}
void Studnet ::check(Studnet x, Studnet y, Studnet z) {
	int ceck;
	string fo;
	if (x.mark > y.mark&&x.mark>z.mark) {
		ceck = x.mark;
		fo = x.name;
	}
	else if(y.mark>x.mark&&y.mark>z.mark)
	{
		ceck = y.mark;
		fo = y.name;
	}
	else {
		ceck = z.mark;
		fo = z.name;
	}
	cout<<"the person how get higher marks is "<<fo<<" and his mark is " << ceck << endl;
}
int main()
{
	string s1, s2, s3;
	int n1, n2, n3;
	cin >> s1 >> n1;
	
	Studnet ob1(s1, n1);
	cin >> s2 >> n2;
	Studnet ob2(s2, n2);
	cin >> s3 >> n3;
	Studnet ob3(s3, n3);
	 sum(ob1, ob2, ob3);
	ob1.check(ob1, ob2, ob3);
	return 0;
}
