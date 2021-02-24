#include <iostream>
#include <vector>
#include <string>

using namespace std;

int askForK();
vector<int> askForList();
bool solution(int k, vector<int> lst);

int main(){
    cout << solution(askForK(), askForList());
    return 0;
}

int askForK(){
    int k;
    cout << "Enter k: ";
    cin >> k;

    return k;
}

vector<int> askForList(){
    int size = 0;
    int num = 0;
    vector<int> lst;

    cout << "Enter size of the list: ";
    cin >> size;

    cout << "Enter numbers to the list: ";
    for (int i = 0; i < size; i+=1){
        num = 0;
        cin >> num;
        lst.push_back(num);
    }

    return lst;
}

// using nested double loop
bool solution(int k, vector<int> lst){
    bool ans = false;

    for (int i = 0; i < lst.size(); i+=1){
        for (int j = 0; j < lst.size(); j+=1){
            if ((i + j) == k)
                ans = true;            
        }
    }

    return ans;
}
