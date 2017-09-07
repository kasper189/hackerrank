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
#include <iterator>
#include <unordered_map>

const int count(std::vector<std::string>& iDataset, int iDatasetSize, std::string& iMatching)
{
    int size(0);
    for(int i = 0; i < iDatasetSize; i++)
    {
        if(iDataset[i] == iMatching)
        {
          size++;
        }
    }

    return(size);
}

int main(){

    std::vector<std::string> aDataset;
    int datasetSize(0);
    int queryNumber(0);

    std::cin >> datasetSize;
    for(int i = 0; i < datasetSize; i++)ss
    {
        std::string aString;
        std::cin >> aString;
        aDataset.push_back(aString);
    }

    std::cin >> queryNumber;

    for(int i = 0; i < queryNumber; i++)
    {
        std::string aString;
        std::cin >> aString;
        std::cout << count(aDataset, datasetSize, aString) << std::endl;
    }

    return 0;
}