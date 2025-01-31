
// # include <bits/stdc++.h>
# include <iostream>
# include <set> 
# include <vector>

using namespace std;

    // first approache
        // int main() {
        // 	// your code goes here
        //     int t , size, element;
        //     cin >> t;
        //     for ( int i = 0; i < t; i++ ) {
        //         set<int> num;
        //         cin >> size;
        //         for ( int j = 0; j < size; j++ ) {
        //             cin >> element;
        //             num.insert(element);
        //         }
        //         std::cout << num.size() << std::endl;
        //         for ( set<int>::iterator it = num.begin(); it != num.end(); it++ ) {
        //             std::cout << *it << " ";
        //         }
        //         std::cout << std::endl;
        //     }
        // }

    // second approache

            // void remove_duplicate( std::vector<int> array , int &size ) {
            //     std::vector<int> distinctElements;
            //     distinctElements.push_back( array[0] );
            //     for ( int i = 1; i  < size; i++ ) {
            //         if ( array[i] != array[i - 1] ) distinctElements.push_back( array[i] );
            //     }
            //     size = distinctElements.size();
            //     std::cout << size << std::endl;
            //     for ( int i = 0; i < size ; i++ ) {
            //         std::cout << distinctElements[i] << " ";
            //     }
            //     std::cout << std::endl;
            // }


    // Optimization of the second approach ( remove_duplicate )

            void remove_duplicate( std::vector<int> &array , int &size ) {
                int j = 1;
                for ( int i = 1; i < size; i++ ) {
                    if ( array[i] != array[j - 1] ) {
                        array[ j ] = array[i];
                        j++;
                    }
                }
                std::cout << j << std::endl;
                for ( int i = 0; i < j ; i++ ) {
                    std::cout << array[i] << " ";
                }
                std::cout << std::endl;
            }
    
    int main() {
        int t , element;
        cin >> t;
        while ( t-- ) {
            cin >> element;
            std::vector<int> array(element);
            for ( int i = 0; i < element; i++ ) {
                cin >> array[i];
            }
            remove_duplicate( array, element );
        }
    }
