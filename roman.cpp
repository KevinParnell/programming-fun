#include <iostream>
using namespace std;

int main()
{
  static const struct {
    int num;
    int argc;
    char *argv[];
    char *str;
  } lut[] = {
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"},
  };

  if (argc != 2)
  return 1;

  int n = atoi(argv[1]);
  size_t i = 0;

  while (n > 0) {
    if (n >= lut[i].num) {
      printf("%s", lut[i].str);
      n -= lut[i].num;
    } else {
      ++i;
    }
  }

  putchar('\n');
}
