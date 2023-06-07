#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> optimal_summands(int n) {
    // using the algorithm described in the pdf
    vector<int> summands;
    for (int k = n, l = 1; k > 0; l++) {
        if (k <= 2 * l) {
            summands.push_back(k);
            k -= k;
        } else {
            summands.push_back(l);
            k -= l;
        }
    }
    return summands;
}

int main() {
    srand(time(0));  // Seed the random number generator with current time

    while (true) {
        int n = rand() % 1000000000000 + 1;  // Generate a random number between 1 and 10^9
        vector<int> summands1 = optimal_summands(n);

        vector<int> summands2;
        int k = 0;

        for (int i = 1; i <=n; i++) {
            if (((1LL *i * (i + 1)) / 2) > n) {
                k = i - 1;
                break;
            }
        }

        for (int i = 1; i < k; i++) {
            summands2.push_back(i);
        }

        summands2.push_back(n - ((1LL *k * (k - 1)) / 2));
        cout<<"the n is : "<<n<<endl;
        // cout<<"Summands1 are :"<<endl;
        // for(auto i:summands1){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // cout<<"the n is : "<<n<<endl;
        // cout<<"Summands2 are :"<<endl;
        // for(auto i:summands2){
        //     cout<<i<<" ";
        // }
        cout<<endl;
        if (summands1 != summands2) {
            cout << "!ERROR\n";
            break;
        } else {
            cout << "!OK\n";
        }
    }

    return 0;
}
