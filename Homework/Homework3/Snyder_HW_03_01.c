#include <stdio.h>
#include <pthread.h>

// Compile: gcc -o race_condition_thread race_condition_thread.c -lpthread

static void * increase(void * ptr);

int main()
{
	int count = 0;
	const int numThreads = 4;
	pthread_t threadID[4];

	unsigned int i = 0;
	for(i = 0; i < numThreads; ++i)
	{
		int retVal = pthread_create(&threadID[i], NULL, &increase, (void *)(&count));
		if(0 != retVal)
		{
			printf("Error - pthread_create() return code: %d\n", retVal);
			return (-1);
		}
	}

	for(i = 0; i < numThreads; ++i)
	{
		pthread_join(threadID[i], NULL);
	}

	printf("All threads complete. Count=%d\n", count);
	return 0;
}

static void * increase(void *ptr)
{
	(*((int *)(ptr)))++;
	return 0;
}
