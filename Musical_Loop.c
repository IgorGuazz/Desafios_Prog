/*

A musical loop is a small section of music composed to be played continuously (that is, the section is played again when it reaches the end), in a seamless way. 
Loops are used in many styles of popular music (hip hop, techno, etc), as well in computer games, especially casual games on the Internet.
Loops may be digitalized for example using PCM (Pulse Code Modulation), a technique for representing analog signals used extensively in digital audio.  
In PCM, the magnitude of the signal is sampled at regular intervals, and the values sampled are stored in sequence. To produce the sound for
the sampled data, the procedure is applied in reverse (demodulation).
Fernanda works for a game software house, and composed a beautiful musical loop, coded in PCM.
Analyzing the waveform of her loop in audio editing software, Fernanda became curious when she noticed the number of \peaks".
A peak in a waveform is the value of a sample that represents a local maximum or minimum. The  gure below illustrates (a) a waveform and (b) the loop formed with this
waveform, containing 48 peaks.

Fernandinha is a dear friend of yours. She has asked your help to determine how many peaks exist
in her musical loop.

Input
The input contains several test cases. The  rst line of a test case contains one integer N, representing the number of samples in the musical loop composed by Fernanda 
(2<=N<=10^4).  The second line contains N integers Hi, separated by spaces, representing the sequence of magnitudes sampled 
(10^4<=Hi<=10^4 for 1<=i<=N, H1̸=HN and Hi̸=Hi+1 for 1<=i<N). Notice that H1 follows HN when the loop is played.
The end of the input is indicated by a line that contains only one zero.

Output
For each test case in the input your program must print a single line, containing one integer, the number
of peaks that exist in the musical loop.

SampleInput
2
1 -3
6
40 0 -41 0 41 42
4
300 450 449 450
0

SampleOutput
2
2
4
*/

#include <stdio.h>

int main(){
  int up=0, down=0;
  int N;
  int frst, scnd;
  int current, last;
  int i;
  int peaks = 0;

  scanf("%d", &N) != 0;
  while (N != 0) {
    if(N == 2){
      scanf("%d %d",&frst, &scnd);
      if(frst > scnd){
        down = 1;
      }else{
        up = 1;
      }
      last = scnd;
      current = frst;
      if ((current > last) && down) {
        peaks++;
        down = 0;
        up = 1;
      }else{
        if ((current < last) && up) {
          peaks++;
          down = 1;
          up = 0;
        }
      }
      last = frst;
      current = scnd;
      if ((current > last) && down) {
        peaks++;
        down = 0;
        up = 1;
      }else{
        if ((current < last) && up) {
          peaks++;
          down = 1;
          up = 0;
        }
      }

    }else{
      scanf("%d %d",&frst, &scnd);
      if(frst > scnd){
        down = 1;
      }else{
        up = 1;
      }
      last = scnd;
      for (i = 0; i < (N-2); i++) {
        scanf("%d", &current);
        if ((current > last) && down) {
          peaks++;
          down = 0;
          up = 1;
        }else{
          if ((current < last) && up) {
            peaks++;
            down = 1;
            up = 0;
          }
        }
        last = current;
      }
      current = frst;
      if ((current > last) && down) {
        peaks++;
        down = 0;
        up = 1;
      }else{
        if ((current < last) && up) {
          peaks++;
          down = 1;
          up = 0;
        }
      }
      last = current;
      current = scnd;
      if ((current > last) && down) {
        peaks++;
        down = 0;
        up = 1;
      }else{
        if ((current < last) && up) {
          peaks++;
          down = 1;
          up = 0;
        }
      }
    }
    up = 0;
    down = 0;
    printf("%d\n", peaks);
    peaks = 0;
    scanf("%d", &N);
  }

  return 0;

}
