// Cash Register Program
// The goal here is to create a program similar to the cash demonstration in PS1
// of cs50. Our user is going to put in the price of the item, the amount the 
// customer pays, and will be told which bills and coins to be handed back.

#include <stdio.h>
#include <unistd.h>
// Dollar Variables
int ch50, ch20, ch10, ch5, ch1;
// Cent Variables
int hlfch, qtrch, dmech, nckch, pnych;
int loop()
{
	int i;
	for (i = 0; i <= 25; i++) {
		printf("\n");
	}
}
int main(void)
{
	double purch;
	printf("Enter the transaction total:");
	scanf("%le", &purch);
	sleep(1);
	int paid;
	printf("Enter the amount the customer paid:");
	scanf("%d", &paid);
	sleep(1);
	double change = paid - purch;
	// Dollars Back
	if (1 <= change){
		if (change >= 50)
		{
    			ch50 = (int)(change / 50);
    			change -= 50 * ch50;
		}
		if (change >= 20)
		{
    			ch20 = (int)(change / 20);
    			change -= 20 * ch20;
		}
		if (change >= 10)
		{
    			ch10 = (int)(change / 10);
    			change -= 10 * ch10;
		}
		if (change >= 5)
		{
    			ch5 = (int)(change / 5);
    			change -= 5 * ch5;
		}
		if (change >= 1)
		{
    			ch1 = (int)(change / 1);
    			change -= 1 * ch1;
		}
		printf("$50 Bill Owed: %d\n$20 Bill Owed: %d\n$10 Bill Owed: %d\n$5 Bill Owed: %d\n$1 Bill Owed: %d\n\n\n\n\n", ch50, ch20, ch10, ch5, ch1);
		sleep(1);
	}
	// Cents back
	if (1 > change) {
		change = (int)(change * 100);
		if (change >= 50){
			hlfch = change / 50;
			change -= 50 * hlfch;
		}
		if (change >= 25){
			qtrch = change / 25;
			change -= 25 * qtrch;
		}
		if (change >= 10){
			dmech = change / 10;
			change -= 10 * dmech;
		}
		if (change >= 5){
			nckch = change / 5;
			change -= 5 * nckch;
		}
		if (change > 0){
			pnych = change / 1;
			change -= 1 * pnych;
		}
		printf("Half-Dollars Owed: %d\nQuarters Owed: %d\nDimes Owed: %d\nNickels Owed: %d\nPennies Owed: %d\n", hlfch, qtrch, dmech, nckch, pnych);
	}
	else {
                printf("Insufficient Funds for transaction.\n");
        }

}

