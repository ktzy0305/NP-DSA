int search(int dataArray[], int arraySize, int start, int target)
{
    if (start < arraySize)
    {
        if(dataArray[start] == target)
            return start;
        else
        {
            if (dataArray[start] > target)
                return -1;
            else
                search(dataArray, arraySize, start+1, target);
        }
    }
    else
        return -1;
}

int binarySearch(int dataArray[], int start, int last, int target)
{
    if (start > last)
        return -1;
    else
    {
        int mid = (start+last)/2
        if(dataArray[mid] == target)
            return mid;
        else
        {
            if (target < dataArray[mid])
                binarySearch(dataArray, start, mid-1, target)
            else
                binarySearch(dataArray, mid+1, last, target)
        }
    }
}