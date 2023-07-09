#include <bits/stdc++.h>

using namespace std;

class Box
{
	int l, b, h;

public:
	Box()
	{
		l = 0;
		b = 0;
		h = 0;
	}
	Box(int length, int breadth, int height)
	{
		l = length;
		b = breadth;
		h = height;
	}

	Box(Box &c)
	{
		l = c.l;
		b = c.b;
		h = c.h;
	}

	int getlength() { return l; }
	int getbreadth() { return b; }
	int getheight() { return h; }
	long long CalculateVolume()
	{

		return l * b * h;
	}

	bool operator<(Box const &a)
	{
		if ((l < a.l) || ((b < a.b) && (l == a.l)) || ((h < a.h) && (l == a.l) && (b == a.b)))
		{
			return true;
		}
		else
		{
			return false;
		}
	};

	friend ostream &operator<<(ostream &cout, Box const &a)
	{

		cout << a.l << " " << a.b << " " << a.h;
		return cout;
	}
};

void check2()
{
	int n;
	cin >> n;
	Box temp(3, 4, 5);
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox;
			NewBox = temp;
			cout << NewBox << endl;
		}
	}
}

int main()
{
	check2();
}