/*
As you didn't show up to the yearly general meeting of the Nordic
Club of Pin Collectors, you were unanimously elected to organize
this years excursion to Pin City.  You are free to choose from a
number of weekends this autumn, and have to  nd a suitable hotel
to stay at, preferably as cheap as possible.
You have some constraints: The total cost of the trip must be
within budget, of course. All participants must stay at the same
hotel, to avoid last years catastrophe, where some members got lost
in the city, never being seen again.

Input
The input  le contains several test cases, each of them as described below.
The  rst line of input consists of four integers: 1<=N<=200, the number of participants, 1<=B<=500000, the budget, 1<=H<=18, the number of hotels to consider, and 
1<=W<=13, the number of weeks you can choose between.  Then follow two lines for each of the H hotels.  The  rst gives
1<=p<=10000, the price for one person staying the weekend at the hotel. The second contains W integers, 0<=a<=1000, giving the number of available beds for each weekend at the hotel.

Output
For each test case, write to the output the minimum cost of the stay for your group, or "stay home"
if nothing can be found within the budget, on a line by itself.

SampleInput
3 1000 2 3
200
0 2 2
300
27 3 20
5 2000 2 4
300
4 3 0 4
450
7 8 0 13
SampleOutput

900
stay home
*/

#include <stdio.h>

int main(){

    int n, b, h, w;
    int i, j;
    int minCost, personPrice, beds, cost;
    int found;

    while(scanf("%d %d %d %d", &n, &b, &h, &w) != EOF){


        found = 0;
        minCost = b + 1;

        for(i=0; i<h; i++){
            scanf("%d", &personPrice);
            for(j=0; j<w; j++){
                scanf("%d", &beds);
                if(beds >= n){
                    cost = personPrice * n;
                    if(cost < minCost)
                        minCost = cost;
                    if(minCost <= b)
                        found = 1;
                }
            }

        }
        if(found)
            printf("%d\n", minCost);
        else
            printf("stay home\n");

    }


    return 0;


}







