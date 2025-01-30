


#include <iostream>
using namespace std;

int main() {
    int T, N, K;
    cin >> T;
    while ( T-- ) {
        cin >> N >> K;
        int nbGirls[N];

        for ( int i = 0; i < N; i++ ) {
            cin >> nbGirls[i];
        }

        int sum = 0, i = 0, max = 0;
        
        for ( ; i < K ; i++ ) sum += nbGirls[i];

        max = sum;

        for ( ; i < N; i++ ) {
            sum -= nbGirls[i - K];
            sum += nbGirls[i];
            if ( sum > max ) max = sum ;
        }
        
        std::cout << max << std::endl;
    }
}