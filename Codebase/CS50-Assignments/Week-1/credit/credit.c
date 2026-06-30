// Goal is to create a credit card verifyier
// We will use Luhn's Algorithm
// 
// 1. Multiply every other digit by 2, starting with the number’s second-to-last
//    digit, and then add those products’ digits together.
// 
// 2. Add the sum to the sum of the digits that weren’t multiplied by 2.
//
// 3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 
//    is congruent to 0), the number is valid!

// includes
#include <stdio.h>
#include <string.h>


// First we want to know the cards length & determine who is the provider
int check_card_length(char card_num[])
{
    int card_length = strlen(card_num);

    // check if the card length is valid
    if (card_length < 13 || card_length > 16)
    {
        printf("CARD NOT RECOGNIZED\n");
        return 0;
    }
    // visa cards start with 4 and have a length of 13 or 16
    if (card_num[0] == '4' && (card_length == 13 || card_length == 16))
    {
        printf("VISA\n");
        return 1;
    }
    // mastercard cards start with 5 and have a length of 16
    if (card_num[0] == '5' && (card_length == 16))
    {
        printf("MASTERCARD\n");
        return 2;
    }
    // amex cards start with 3 and have a length of 15
    if (card_num[0] == '3' && (card_length == 15) && (card_num[1] == '4' || card_num[1] == '7'))
    {
        printf("AMEX\n");
        return 3;
    }
    // discover cards start with 6 and have a length of 16
    if (card_num[0] == '6' && (card_length == 16))
    {
        printf("DISCOVER\n");
        return 4;
    }
    // if the card number does not match any of the above, it is not recognized
    else
    {
        printf("CARD NOT RECOGNIZED\n");
        return 0;
    }
}
// next we want to check if the card number is valid using Luhn's Algorithm
void check_card_validity(char card_num[])
{
    int card_length = strlen(card_num);
    int sum = 0;
    // loop through the card number starting from the second to last digit and multiply
    // every other digit by 2
    for (int i = card_length - 2; i >= 0; i -= 2)
    {
        int digit = (card_num[i] - '0') * 2;
        if (digit > 9)
        {
            sum += digit / 10 + digit % 10;
        }
        else
        {
            sum += digit;
        }
    }
    // loop through the card number starting from the last digit and add every other digit
    for (int i = card_length - 1; i >= 0; i -= 2)
    {
        sum += card_num[i] - '0';
    }
    // check if the sum is divisible by 10
    if (sum % 10 == 0)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID CARD NUMBER\n");
    }
}
// Our main function will prompt the user for a card number and then call the 
// functions to check the card length and validity
int main(void)
{
    char card_num[20];
    printf("Enter your card number:  ");
    scanf("%s", card_num);
    int card_type = check_card_length(card_num);
    if (card_type != 0)
    {
        check_card_validity(card_num);
    }
}