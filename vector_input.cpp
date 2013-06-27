#include<vector>
#include<iostream>

using namespace std;

vector<int> s;
int size;
int x[10];

void abc(vector<int> v);

int main()
{
  s.push_back(65);
  s.push_back(324);
  s.push_back(0);
  s.push_back(-567);

    abc(s);

}

void abc(vector<int> v)
{   size = v.size();
    for(int i=0; i<4; i++)
      {
          x[i] = v[i];
          cout << i <<" : "<< x[i] << endl;
      }

}
