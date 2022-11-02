rotated(int arr[], int key)
{
    int l = arr[0], h = strlen(arr) - 1;
    int mid = (l + h) / 2;
    if (mid == key)
    {
        return mid;
    }

    while (l <= h)
    {
        if (key >=  arr[l] && key < arr[mid])
        {
            if (key > mid)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        else
        {
            if (key > arr[mid] && key <= arr[h])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
}