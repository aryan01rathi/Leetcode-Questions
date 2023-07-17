#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cin >> n;
    while (row <=n)
    {
        //first triangle
        int space= n-row;
        while(space){
            cout<<" ";
            space--;
        }

        //second triaangle
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }
        //third triangle
        int thr=row-1;
        while(thr){
            cout<<thr;
            thr--;
        }
        cout<<endl;
        row++;



    }
}