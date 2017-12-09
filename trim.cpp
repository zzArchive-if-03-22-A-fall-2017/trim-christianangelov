/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void 	trim (const char *source, char *trimmed_string)
{
  strcpy(trimmed_string, source);
  int len = strlen(trimmed_string);
  int count = 0;
  bool IsTrimmed = false;
  int newLen = 0;

  for(int i = 0; i < len && IsTrimmed == false; i++)
  {
    if (trimmed_string[i] == ' ')
    {
      count++;
    }
    else
    {
      IsTrimmed = true;
    }
  }
  newLen = len - count;
  char *TrimmedFront = new char[newLen];


  int posTrimmedString = count;
  for(int i = 0; i < newLen; i++)
  {
    TrimmedFront[i] = trimmed_string[posTrimmedString];
    posTrimmedString++;
  }
  strcpy(trimmed_string, TrimmedFront);











  len = strlen(trimmed_string);
  count = 0;
  IsTrimmed = false;
  newLen = 0;

  for(int i = len-1; i < len && IsTrimmed == false; i--)
  {
    if (trimmed_string[i] == ' ')
    {
      count++;
    }
    else
    {
      IsTrimmed = true;
    }
  }
  newLen = len - count;
  char *TrimmedBack = new char[newLen];


  for(int i = 0; i < newLen; i++)
  {
    TrimmedBack[i] = trimmed_string[i];
  }
  strcpy(trimmed_string, TrimmedBack);
}
