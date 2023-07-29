#include <bits/stdc++.h>
using namespace std;

int countStudents(vector<int> &students, vector<int> &sandwiches)
{
    int lst = students.size();
    int lsd = sandwiches.size();
    int i = 0, j = 0, repeat = 0, eaten = 0;
    while (i < lsd && repeat < lst)
    {
        if (sandwiches[i] == students[j])
        {
            i++;
            j++;
            eaten++;
            repeat = 0;
        }
        else
        {
            students.push_back(students[j]);
            j++;
            repeat++;
        }
    }
    return lsd - eaten;
}

 
int main()
{
    // vector<int>stud={1,1,0,0};
    // vector<int>sand={0,1,0,1};
    // cout<<countStudents(stud,sand);
    
    
}