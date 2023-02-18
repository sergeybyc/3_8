# include <stdio.h>

main()
{
	int counter, max, min, n, i;
	int sum = 0;
	printf("Vvedite kolichesvo elementov\n");
	scanf("%i",&n);
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
    {
        printf("Vvedite element:\n");
        
        scanf("%d", &arr[i]);
    }
	int minimal = arr[0];
    int maximum = arr[0];
    int summ = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minimal)
        {
            minimal = arr[i];
        }
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
        summ += arr[i];
    }
    double average = (double)summ/n;
	printf("max = %i\n", maximum);
	printf("minimum = %i\n", minimal);
	printf("summa vsex = %i\n", summ);
	printf("srednee arifmiticheskoe = %f", average);
	delete[] arr;
}
