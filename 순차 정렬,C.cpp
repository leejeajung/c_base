#include <stdio.h>
//void ali(int i[5])
//{
//	/*for (int e = 0; e < 5; ++e)
//		printf("%d", i[e]);
//	printf("값이 제대로 들어왔나\n");*/
//	int t = 0;
//	for (int a = 0; a < 4; ++a)
//	{
//		if (i[a] > i[a + 1])
//			
//			t = i[a];
//			i[a] = i[a+1];
//			i[a+1] = t;
//	}
//	for (int e = 0; e < 5; ++e)
//		printf("%d", i[e]);
//
//}

int main(void)
{
	int t = 0;
	int arr[] = { 1,2,3 };
	for (int i = 0; i < 2; ++i)
	{
		int j = arr[i] + 1;
		t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
			
		 }
	for (int e = 0; e < 2; ++e)
			printf("%d", arr[e]);
	
	/*int arr[5];
	printf("값을 입력하시오\n");
	for (int i = 0; i < 5; ++i)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 5; ++i)
	printf("%d", arr[i]);

	printf("값이 제대로 들어갔나\n");

     ali(arr);*/

	
	return 0;
}