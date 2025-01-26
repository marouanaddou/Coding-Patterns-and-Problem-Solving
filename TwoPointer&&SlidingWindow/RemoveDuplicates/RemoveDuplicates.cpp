
// # include <bits/stdc++.h>
# include <iostream>
# include <set> 
# include <vector>

using namespace std;

 // first approache
// int main() {
// 	// your code goes here
//     int t , size, item;
//     cin >> t;
//     for ( int i = 0; i < t; i++ ) {
//         set<int> num;
//         cin >> size;
//         for ( int j = 0; j < size; j++ ) {
//             cin >> item;
//             num.insert(item);
//         }
        
//         std::cout << num.size() << std::endl;
        
//         for ( set<int>::iterator it = num.begin(); it != num.end(); it++ ) {
//             std::cout << *it << " ";
//         }
//         std::cout << std::endl;
//     }
// }

    // second approache
void remove_duplicate( std::vector<int> array , int &size ) {
    std::vector<int> distinctElements;
    distinctElements.push_back( array[0] );
    for ( int i = 1; i  < size; i++ ) {
        if ( array[i] != array[i - 1] ) distinctElements.push_back( array[i] );
    }
    size = distinctElements.size();
    std::cout << size << std::endl;
    for ( int i = 0; i < size ; i++ ) {
        std::cout << distinctElements[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    int t , item;
    cin >> t;
    while ( t-- ) {
        cin >> item;
        std::vector<int> array(item);
        for ( int i = 0; i < item; i++ ) {
            cin >> array[i];
        }
        remove_duplicate( array, item );
    }
}
