#include "key.h"

int Key::comparisons = 0;
int Key::the_key()const
{
  return key;
}

Key::Key (int x)
{
  key = x;
}

bool operator ==(const Key &x, const Key &y)
{
  Key::comparisons++;
  return x.the_key()== y.the_key();
}

bool operator !=(const Key &x, const Key &y)
{
  Key::comparisons++;
  return x.the_key()!= y.the_key();
}

bool operator >=(const Key &x, const Key &y)
{
  Key::comparisons++;
  return x.the_key()>= y.the_key();
}

bool operator <=(const Key &x, const Key &y)
{
  Key::comparisons++;
  return x.the_key()<= y.the_key();
}

bool operator >(const Key &x, const Key &y)
{
  Key::comparisons++;
  return x.the_key()> y.the_key();
}

bool operator <(const Key &x, const Key &y)
{
  Key::comparisons++;
  return x.the_key()< y.the_key();
}

