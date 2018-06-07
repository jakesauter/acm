int main()
{
  int g, money, k, TC, M, C;
  int price[25][25];
  bool reached[25][210];

  scanf("%d", &TC);
  while(TC--)
  {
    scanf("%d %d", &M, &C);
    for(g=0;g<C;g++)
    {
      scanf("%d", &price[g][0]);
      for(money=1;money <= price[g][0]);money++)
      {
        scanf("%d", &price[g][money]);
      }
      memset(reachable, false, sizeof reachable);//clear everything
      for(g=1;g<=price[0][0];g++)
      {
        if(M-price[0][g] >= 0)
        {
          reachable[0][M-price[0][g]] = true;
        }

        for(g=0;g<C;g++)
        {
           
        }
      }

    }
  }
  return 0;
}
