int sort_bubble(int arr[], int size)
{
    int passes, comparison;
    int i,j;
    passes = size -1;
    comparison = size-1;

    for(i=0; i<passes; i++)
    {
        for(j=0; j<comparison - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr;
                arr = temp ;
            }
        }
    }
return 0;
}