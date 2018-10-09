#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <limits.h>

void * thread1(int length, int array[] )
{

int ii = 0;
int smallest_value = INT_MAX;
        for (; ii < length; ++ii)
        {
                if (array[ii] < smallest_value)
                {
                        smallest_value = array[ii];
                }
        }
 printf("smallest is: %d\n", smallest_value);


}

void * thread2()
{

  printf("\n");

}

int main()
{
  int average;
  int min;
  int max;

  int how_many;
  int i;
  int status;
  pthread_t tid1,tid2;

  printf("How many numbers?: ");
  scanf("%d",&how_many);
  int ar[how_many];
  printf("Enter the list of numbers: ");
  for (i=0;i<how_many;i++){
  scanf("%d",&ar[i]);
  }

//for(i=0;i<how_many;i++)
//printf("%d\n",ar[i]);

        pthread_create(&tid1,NULL,thread1(how_many,ar),NULL);
        pthread_create(&tid2,NULL,thread2,NULL);
        pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);
        return 0;
  exit(0);
}
