

# include <iostream>
# include <unordered_set>

using namespace std;

    // first approache
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, b;
        bool check = false;
        cin >> n >> b;
        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        std::unordered_set<int> elements;
        for ( int i = 0; i < n; i++ ) {
            if ( elements.find(arr[i] + b) != elements.end() || elements.find(arr[i] - b) != elements.end() ) {
                std::cout << 1 << std::endl;
                check = true;
                break;
            }
            elements.insert(arr[i]);
        }

        if (!check) cout << 0 << endl;
    }
    return 0;
}

