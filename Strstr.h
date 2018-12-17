#pragma once
#include <cstring>
#include <iostream>

using namespace std;


class Solution {
public:
	/**
	* Returns a index to the first occurrence of target in source,
	* or -1  if target is not part of source.
	* @param source string to be scanned.
	* @param target string containing the sequence of characters to match.
	*/
	int strStr(const char *source, const char *target) {
		if ((source == NULL) || (target == NULL))
		{
			return -1;
		}
		int sourceLen = strlen(source);

		int targetLen = strlen(target);
		if (targetLen > sourceLen)
		{
			return -1;
		}
		char* p = NULL; char* q = NULL;
		p = (char*)source; q = (char*)target;
		*p = 'a';
		int i = 0;
		for (i = 0; i < sourceLen - targetLen; i++)
		{
			p = p + i;
			q = (char*)target;
			int j = 0;
			for (j = 0; j < targetLen; j++)
			{
				if ((*p++) != (*q++)) {
					break;
				}

			}
			if (j == targetLen)
				break;
		}
		if (i != (sourceLen - targetLen))
		{
			return -1;
		}
		else {
			return i;
		}
	};
	int subMain()
	{
		char* source = "1234";
		char* target = "235";
		int res = strStr(source, target);
		printf("%s, %s\r\n", source, target);
		return res;
	}
}; 