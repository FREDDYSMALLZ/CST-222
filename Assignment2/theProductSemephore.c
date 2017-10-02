/*Created by Caleb Miller and is his own work*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define MAX 10;
semaphore mutex = 1;
semaphore empty = N;
semaphore full = 0;
int i;
int theProduct = 0;

void consume(int i){
  printf("Consumer: %i\n", i);
}

void *producer(void *var){
	
	int i;
	while(TRUE) {
		i = produce_item();
		down(&empty);
		down(&mutex);
		insert_item(i);
		up(&mutex);
		up(&full);
	}
}

void *consumer(void *var) {
	int i;
	while(TRUE) {
		down(&full);
		down(&mutex);
		i = remove_item();
		up(&mutex);
		ip(&empty);
		consume_item(i);
	}
}
