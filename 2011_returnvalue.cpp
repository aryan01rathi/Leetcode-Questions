#include <iostream>
#include<vector>
using namespace std;
void finalValueAfterOperations(vector<string> &operations)
{
    int len = operations.size();
    int x=0;
    for (int i = 0; i < len; i++)
    {
        if (operations[i]=="X++"){
                x=x+1;
        }
        else if(operations[i]=="++X"){
                x=x+1;
        }
        else if(operations[i]=="--X"){
                x=x-1;
        }
        else if(operations[i]=="X--"){
                x=x-1;
        }
    }
    cout<<x;
}

int main()
{
    // int n;
    // cin >> n;
    // cout << solve(n);

    vector<string> values={"++X","++X","X++"};

    finalValueAfterOperations(values);
}