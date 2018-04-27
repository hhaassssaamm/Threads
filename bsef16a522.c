#include<stdio.h>
#include<pthread.h>

int array[1000];

void* sum(void* s){
	int s2=(int)s;
	int start=s2;
	int sum=0;
	for(int i=0;i<100;i++){
		sum=sum+array[start];
		start++;
	}
	return (void*)sum;
}

int main(){
	pthread_t t_id1,t_id2,t_id3,t_id4,t_id5,t_id6,t_id7,t_id8,t_id9,t_id10;
	int total=0;
	int t1,t2,t3,t4,t5,t6,t7,t8,t9,t10;
	for(int i=0;i<1000;i++){
		array[i]=i;
	}
	int a=0;
	pthread_create(&t_id1,NULL,sum,(void*)a);
	a=100;
	pthread_create(&t_id2,NULL,sum,(void*)a);
	a=200;
	pthread_create(&t_id3,NULL,sum,(void*)a);
	a=300;
	pthread_create(&t_id4,NULL,sum,(void*)a);
	a=400;
	pthread_create(&t_id5,NULL,sum,(void*)a);
	a=500;
	pthread_create(&t_id6,NULL,sum,(void*)a);
	a=600;
	pthread_create(&t_id7,NULL,sum,(void*)a);
	a=700;
	pthread_create(&t_id8,NULL,sum,(void*)a);
	a=800;
	pthread_create(&t_id9,NULL,sum,(void*)a);
	a=900;
	pthread_create(&t_id10,NULL,sum,(void*)a);
	
	void* p;
	pthread_join(t_id1,&p);
	t1=(int)p;
	pthread_join(t_id2,&p);
	t2=(int)p;
	pthread_join(t_id3,&p);
	t3=(int)p;
	pthread_join(t_id4,&p);
	t4=(int)p;
	pthread_join(t_id5,&p);
	t5=(int)p;
	pthread_join(t_id6,&p);
	t6=(int)p;
	pthread_join(t_id7,&p);
	t7=(int)p;
	pthread_join(t_id8,&p);
	t8=(int)p;
	pthread_join(t_id9,&p);
	t9=(int)p;
	pthread_join(t_id10,&p);
	t10=(int)p;
	
	total=t1+t2+t3+t4+t5+t6+t7+t8+t9+t10;
	
	printf("The Total sum is : %d \n",total);
	return 0;
}
