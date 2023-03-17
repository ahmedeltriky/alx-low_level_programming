
  
int main()
{
  // set both the starting and ending alphabet
  char start = 'a';
  char end = 'z' ;

  // initialize ch with the starting alphabet as a
  char ch = start;

  // print out characters from the initial value of ch til before e
  while(ch != end)
  {
     putchar(ch);
     ch++;
  }
  putchar('z');

  return 0;
}
