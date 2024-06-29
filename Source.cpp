#include <iostream>

#include <vector>
using namespace std;

vector<int> Increment(vector<int> orig, int inc){
  vector<int> newv;
  for( auto i: orig){
    newv.push_back(i+inc);
   }
  return newv;
}
int main(){
  vector<int> a=vector<int>{1,2,3,4,5};
  for (auto i: Increment(a,1)){
    cout<<i<<" ";
  }
  return 0;
}
