int sort_insertion(int arr[], int size)
{
    int i, j, small;

    for(i=1; i< small; i++)
    {
        small = arr[i];
        for(j=i-1; j>= 0 && small < arr[j-1]; j--)
        {
            arr[j] = arr[j-1];
        }
    arr[j] = small;
    }
return 0;
}