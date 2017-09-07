#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

const int computeSum(vector< vector<int> >& iMap, int& xCenter, int& yCenter)
{
    int sum(0);
    sum += iMap[xCenter][yCenter];
    sum += iMap[xCenter - 1][yCenter - 1];
    sum += iMap[xCenter - 1][yCenter];
    sum += iMap[xCenter - 1][yCenter + 1];
    sum += iMap[xCenter + 1][yCenter - 1];
    sum += iMap[xCenter + 1][yCenter];
    sum += iMap[xCenter + 1][yCenter + 1];
    return sum;
}


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    bool isFirst(true);
    int max(0);

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
           if((i - 1 >= 0) && (i + 1 < 6) && (j - 1 >= 0) && (j + 1 < 6))
           {
               int sum = computeSum(arr, i, j);
               if(isFirst)
               {
                   max = sum;
                   isFirst = false;
               }
               if(!isFirst && sum > max)
               {
                   max = sum;
               }
           }
        }
    }

    cout << max;
    return 0;
}
