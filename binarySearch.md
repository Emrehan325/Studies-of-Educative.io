## Pseudocode of binary search 

```

function binarySearch(arr,mid)
min = 0
max = arr.length - 1 
    while (min <= max)
        mid = (min + max)/2
        if arr[mid] == x
            return mid
        else if arr[mid] < x
            min = mid + 1
        else
            max = mid - 1
    end while
    return -1
end function


```