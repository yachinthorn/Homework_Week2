int binary_search(int target) {
    int array[16];
    int left = 0;
    int right = 16;

    while (left < right) {
        int mid = left + ((right - left) / 2);
        
        if (array[mid] < target) {
            right = mid;
        }
        else if (array[mid] > target) {
            left = mid + 1;
        }
        else {
            return mid;
        }
    }
    
    return -1;
}