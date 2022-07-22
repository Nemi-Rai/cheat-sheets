/*  using printf() and scanf() */
main()
{
  int x=10;
  float y;

  printf("(1)  %d\n", x);
  printf("(2)  %d\n", x*5);

  printf("(3)  x = ");
  printf("%d", x);
  printf("\n");

  printf("(4)  x = %d\n", x);

  printf("input x: ");  scanf("%d", &x);
  printf("(5)  x = %d\n", x);
  
/*
can input several values of different types
with one scanf command
*/ 
  printf("input x, y: ");  scanf("%d %f", &x, &y);
  printf("(6)  x = %d, y = %f\n", x, y);
}