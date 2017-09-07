#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;


int main() {
	int aVectorSize;
    int aNumberOfOperations;

	cin >> aVectorSize >> aNumberOfOperations;

	std::vector<long> aVector(aVectorSize, 0);

	for(int i = 0; i < aVectorSize; i++) {
		aVector[i] = 0;
	}

	for(int i = 0; i < aNumberOfOperations; i++) {
		int aBegin;
        int aEnd;
		long aIncrement;

		cin >> aBegin >> aEnd >> aIncrement;
		aVector[aBegin - 1] += aIncrement;

		if(aEnd < aVectorSize) {
			aVector[aEnd] -= aIncrement;
		}
	}
	long aMaxValue = 0;
    long aUpdatedListValue = 0;

	for(int i = 0; i < aVectorSize; i++) {
		aUpdatedListValue += aVector[i];
		if(aUpdatedListValue > aMaxValue) {
			aMaxValue = aUpdatedListValue;
		}
	}
	cout << aMaxValue << endl;
    return 0;
}