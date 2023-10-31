void learnVector(){

    // It is a Dynamic Array with contiguous memory

    vector<int> v;      // {}
    v.push_back(3);     // {3}
    v.emplace_back(4);  // {3,4}  faster one

    vector<pair<int, int>> vec;
    vec.push_back({2,4});
    vec.emplace_back(3,6);  // see the difference

    vector<int> temp(4);   // {0, 0, 0, 0}
    vector<int> nums(4, 100);   // {100, 100, 100, 100}
    vector<int> nums1(nums);   // {100, 100, 100, 100}  copy vectors
    
    // iterators

    v = {1,2,3,4,5,6};

    vector<int>::iterator it = v.begin();   // v.begin() stores the memory address of first element
    cout<< *(it) <<endl;    //1  *(it) to print value of address

    it++;
    cout<< *(it) <<endl;    //2

    it = it + 2;
    cout<< *(it) <<endl;    //4

    vector<int>::iterator it2 = v.end();    // points at last+1, need to do it2--
    vector<int>::iterator it3 = v.rbegin();     // points at last element and works in reverse way

    cout<< v.back() << endl;     // 6 --> print last element


    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *(it) << " ";
    }

    for(int nums: temp){
        cout << nums << " ";
    }

    v = {10,20,12,23,35};

    // Delete
    v.erase(v.begin());     // {20, 12, 23 35}
    v.erase(v.begin(), v.begin()+2);    // {23, 35}  (start, end+1)

    // Insert (position, value)
    v.insert(v.begin(), 300);   // {300, 23, 35}

    // Insert (position, NoOfTimes, value)
    v.insert(v.begin(), 3, 400);    // {400, 400, 400, 300, 23, 35}

    // Insert vector into another vector
    vector<int> temp = {1,2};
    temp.insert(temp.begin(), v.begin(), v.end());  // {400, 400, 400, 300, 23, 35, 1, 2}


    temp.pop_back();   // {400, 400, 400, 300, 23, 35, 1}
    temp.pop_back();   // {400, 400, 400, 300, 23, 35}

    temp.size();  // --> size
    temp.empty(); // --> True or False
    temp.clear(); // --> clear all elements and empty the vector.
}
