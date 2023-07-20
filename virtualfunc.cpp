#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
public:
    string name;
    int age;

    virtual void getdata()
    {
        cout << "person get data";
        cin >> name >> age;
    }
    virtual void putdata()
    {
        cout << name << " " << age << " " << endl;
    }
};
class Professor : public Person
{
public:
static int id;
    int publications, cur_id;
    void getdata()
    {
        cin >> name >> age >> publications;
    }
    virtual void putdata()
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }

    Professor()
    {
      cur_id = ++id;
    }
};
int Professor::id = 0;

class Student : public Person
{
public:
    static int id;
    int arr[6];
    int cur_id;
    void getdata()
    {
        cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }
    }
    void putdata()
    {
        int sum = 0;
        cout << name << " " << age << " ";
        for (int i = 0; i < 6; i++)
        {

            sum += arr[i];
        }

        cout << sum << " " << cur_id << endl;
    }
    Student()
    {
        cur_id = ++id;
    }
};
int Student::id = 0;

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
