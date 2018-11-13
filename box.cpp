#include<iostream>
#include"box.h"
using namespace std;
void box::set_wigth(int a)
{
  wigth = a;
}
void box::set_height(int a)
{
  height = a;
}
void box::set_length(int a)
{
  length = a;
}
int box::get_area()
{
  return height*wigth*length;
}
box::box()
{
  length=0;
  wigth=0;
  height=0;
}
