#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric> //For accumulate operation
using namespace std;




void demoVector()
{
    vector<int> vec = {11,2,3,14};

    cout << "Maximum element: " << *max_element(vec.begin(), vec.end())<<endl;  //max element 14
    cout << "Minimium element: " << *min_element(vec.begin(), vec.end())<<endl;  //min element  2
    
    
    sort(vec.begin(), vec.end());   //O(NlogN)
    //2,3,11,14

    bool present = binary_search(vec.begin(), vec.end(), 3);  //true
    present = binary_search(vec.begin(), vec.end(), 4);   //false


    vec.push_back(100);
    vec.push_back(100);
    vec.push_back(100);
    vec.push_back(100);
    vec.push_back(123);

    for (auto x: vec)   //iterate by reference
    {
        cout << x <<" ";    // 2,3,11,14,100,100,100,100,123
    }
    cout<<endl;

    
    cout << "Sum of elements: " << accumulate(vec.begin(), vec.end(), 0)<<endl; //sum of elements of vector where initial value of sum = 0 553
    

    auto it = lower_bound(vec.begin(), vec.end(), 100);  // >=(iterator to 1st element >= to 100)
    auto it2 = upper_bound(vec.begin(), vec.end(), 100);   // >(iterator to 1st element which is >100)

    cout << "Lower Bound on 100: " << *it << " " << endl << "Upper Bound on 100: " << *it2 << endl;  //100 123
    cout << "Number of 100: " << it2 - it << endl;   //gives number of occurences of 100 i.e. 4

    //another way to count occurence of element
    cout << "Number of 100: " << count(vec.begin(), vec.end(),100) << endl; // 4



    //return distance between two iterators
    int dist = distance(vec.begin(), max_element(vec.begin(), vec.end()));
    cout << "Distance between 1st element and max element: " << dist <<endl; //8



    //reverse the vector
    reverse(vec.begin(), vec.end());
    cout << "Reversing the vector and incrementing each element by 1: " << endl;

     for(auto &x: vec)   // by reference(for incrementing elements by 1)
     {
         x++;
         cout << x << " ";   // 124 101 101 101 101 15 12 4 3
     }
     cout << endl;




     //erasing the elements from vector
     vec.erase(vec.begin()+5);  //removes 6th element i.e 15
     //erasing duplicate occurences
     vec.erase(unique(vec.begin(), vec.end()), vec.end());

     cout << "Vector after removing 6th and duplicate elements: " << endl;

     for(auto &x: vec)   // by reference(for incrementing elements by 1)
     {
         cout << x << " ";   // 124 101 101 101 101 15 12 4 3
     }
     cout << endl;



}





int main()
{

    demoVector();



    return 0;
}