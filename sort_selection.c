void sort_selection(int arr[], int size)
{
    int i, j, smallest, temp;
    for(i=0; i < size - 1; i++)
    {
        smallest = i; 
        for(j=1; j< size; j++)
        {
            if(arr[smallest]=arr[j])
            smallest = j;
        }
        if( i!= smallest)
        {
            temp = arr[i];
            arr[i] = arr[smallest];
            arr[smallest] = temp;        }

    }
}

int main()
{
	int arr[5]={32,5,7,56,78};
	
    printf("the sorted list is:\n");
    return sort_selection(arr,5);
    return 0;
}
