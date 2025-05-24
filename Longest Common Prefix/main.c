#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
	if (strsSize == 0) return "";

	int i = 0;
	while (1) {
		char c = strs[0][i];
		for (int j = 1; j < strsSize; j++) {
			if (strs[j][i] != c || strs[j][i] == '\0') {
				char* prefix = (char*)malloc(i + 1);
				strncpy(prefix, strs[0], i);
				prefix[i] = '\0';
				return prefix;
			}
		}
		if (c == '\0') break;
		i++;
	}

	char* prefix = (char*)malloc(i + 1);
	strncpy(prefix, strs[0], i);
	prefix[i] = '\0';
	return prefix;
}

int main(){
	char* strs[] = {"flower","flow","flight"};
	char** strs_ptr = strs;
	longestCommonPrefix(strs_ptr,3);
	return 0;
}
