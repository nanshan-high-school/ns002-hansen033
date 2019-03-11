#include <iostream>
#include <vector>
using namespace std;

int main() {
  char temp;
  int T, countS = 0, counter = 0;
  vector<char> line;
  cin >> T;
  for( int t = 0 ; t < T ; t ++ ){
    cin >> temp;
    line.push_back(temp);
    counter ++;
//    printf("\n====TEST====vec[counter]:%d\n", line[counter]);
    if( counter > 1 ){
      if( line[counter - 1] == ')' && line[counter - 2] == '(' ){
        counter -= 2;
        countS ++;
        line.pop_back();
        line.pop_back();
      }
    }
  }
  cout << countS << " " << counter << "\n";
  int m1 = countS * 5000;
  int m2 = counter * 3500;
  if( m1 > m2 ){
    cout << "賺" << m1 - m2;
  } else if( m2 > m1 ){
    cout << "賠" << m2 - m1;
  } else if( m1 == m2 ){
    cout << "不賺也不賠";
  } else{
    cout << "error";
  }
}
