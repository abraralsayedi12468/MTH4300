// Snippet A 
std::vector<int> v = {1, 2, 3};
std::cout << v[5] << "\n"; // there is no elemnt of fifth index in this vector, this will cause an error 

// Snippet B
std::vector<int> v2 = {10, 20, 30};
auto it = std::find(v2.begin(), v2.end(), 99); // trying to find an element that doesnt exist in the list 
std::cout << *it << "\n"; // it wont find 99 and an eror will occur so it cannot print anything 

// Snippet C
std::vector<int> v3;
std::fill(v3.begin(), v3.end(), 5); //
std::cout << v3.size() << "\n";

// Snippet D
std::vector<int> v4 = {4, 2, 5, 1}; // 
std::sort(v4.end(), v4.begin()); // assigning .end then .begin is undefined behavior it salways begin point then end, if youd like reverse order you can you the reverse function 