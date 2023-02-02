void swap(vector<int>& arr, int firstIndex, int secondIndex) {
    int len = arr.size ();
    if (firstIndex < len && secondIndex < len)
    {
        int temp = arr[firstIndex];
        arr[firstIndex] = arr[secondIndex];
        arr[secondIndex] = temp;
    }
    
}
