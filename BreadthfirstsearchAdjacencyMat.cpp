#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main()
{
int mat[7][7]={{-1,-1,1,-1,-1,-1,-1},
{1,-1,-1,1,1,-1,-1},
{-1,-1,-1,-1,-1,1,1},
{-1,-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1,-1},
{-1,-1,-1,-1,-1,-1,-1}};
queue<int> q;
 q.push(2);
while(q.size())
{
    int current=q.front();

for(int i=0;i<7;i++)
{
    if(mat[current-1][i]==1)
    {

    q.push(i+1);
    }
}
cout<<current<<" ";
q.pop();

}

}
