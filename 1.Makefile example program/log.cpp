int log (int a)
{
  if (a <= 1) return 0;
  else return 1 + log (a / 2);
}
