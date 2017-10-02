/*Created by Caleb Miller and is his own work 
Had issues pulling straight from the activity directions (see pro-cons-issue/png)*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX 10;
int i;
int theProduct = 0;

void consume(int i){
  	printf("Consumer: %i\n", i);
}

void *producer(void *var){
	
	for(i = 0; i < MAX; i++){
		printf("Producer: %i\n", theProduct);
		theProduct++;
		sleep(1);
	}
exit(0);
}

void *consumer(void *var){

	for(i = 0; i < MAX; i++){
		consume(theProduct);
		sleep(1);
	}
}

int main(int argc, char * argv[]){

	pthread_t thread0, thread1;
	char *msg0 = "1st Message";
	char *msg1 = "2nd Message";
	int ret0, ret1;

	ret0 =	pthread_create(&thread0, NULL, producer, (void *) msg0);
	ret1 =	pthread_create(&thread1, NULL, consumer, (void *) msg1);

	printf("Producer and Consumer threads\n");

	pthread_join(thread0, NULL);
	pthread_join(thread1, NULL);
	
	return 0;
}
