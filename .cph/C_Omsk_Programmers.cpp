#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int arraySize;
        cin >> arraySize;
        vector<int> inputArray(arraySize);
        for (int i = 0; i < arraySize; i++) {
            cin >> inputArray[i];
        }
        unordered_set<int> uniqueElements(inputArray.begin(), inputArray.end());
        int missingElement = 0;
        while (uniqueElements.find(missingElement) != uniqueElements.end()) {
            missingElement++;
        }
        unordered_map<int, int> frequencyMap;
        for (int x : inputArray) {
            frequencyMap[x]++;
        }
        vector<int> result;
        for (int x = 0; x < missingElement; x++) {
            result.push_back(x);
            frequencyMap[x]--;
        }
        vector<int> remainingElements;
        for (auto& x : frequencyMap) {
            while (x.second--) {
                remainingElements.push_back(x.first);
            }
        }
        sort(remainingElements.begin(), remainingElements.end(), greater<int>());
        result.insert(result.end(), remainingElements.begin(), remainingElements.end());
        unordered_set<int> currentSet;
        int currentMax = 0, currentMissing = 0, totalSum = 0;
        for (int x : result) {
            currentSet.insert(x);
            currentMax = max(currentMax, x);
            if (x == currentMissing) {
                while (currentSet.find(currentMissing) != currentSet.end()) {
                    currentMissing++;
                }
            }
            totalSum += currentMissing + currentMax;
        }
        cout << totalSum << endl;
    }
    return 0;
}
