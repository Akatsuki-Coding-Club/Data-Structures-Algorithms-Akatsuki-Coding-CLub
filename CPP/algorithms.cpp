void learnAlgorithms() {
    int arr[] = {5,6,3,4,1};

    // Sort Asscending
    sort(arr, arr + 5);     // [1,3,4,5,6]

    // Sort Descending
    sort(arr, arr+5, descComparator);   // [6,5,4,3,1]

    // Sort in given range
    sort(arr+2, arr+5);     // [5,6,1,3,4]

    vector<int> v = {5,6,3,4,1};
    sort(v.begin(), v.end());


    pair<int, int> a[] = {{1,2}, {2,1}, {4,1}};
    // Make Own Way to Sort
    // sort it according to second element
    // if second elements are same, then
    // sort it according to first element but in descending
    sort(a, a+4, myComp);


    int num = 7;
    int count = __builtin_popcount(num);    // count number of 1 in binary i.e. setBits
    cout << count << endl;

    int max = *max_element(arr, arr+5);     // max element in array
    cout<< max << endl;
}
