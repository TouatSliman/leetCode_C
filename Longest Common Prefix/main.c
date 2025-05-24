#include <stdio.h>
#include <string.h>


char* longestCommonPrefix(char** strs, int strsSize) {
	   char res[] = "\0";
	   char* res_ptr = res;
	   char* strs_ptr = *strs;
	   int min_strlen;
	   int matches[strsSize-1];
	   int min_matches = 99999999;
	   
	   for(int i = 0;i<strsSize-1;i++){
	   matches[i] = 0;
	   min_strlen = strlen(strs[i]) < strlen(strs[i+1]) ? strlen(strs[i]) : strlen(strs[i+1]);
		   for(int j=0;j<min_strlen;j++){
			   if(strs[i][j] == strs[i+1][j]){
				   matches[i]++;
			   }else{
				   break;
			   }
		   }
		   min_matches = matches[i] < matches[i+1] ? matches[i] : matches[i+1];
	   }
	   strncpy(res_ptr,strs_ptr,min_matches);
		
	   return res_ptr;
}

int main(){
	char* strs[] = {"flower","flow","flight"};
	char** strs_ptr = strs;
	longestCommonPrefix(strs_ptr,3);
	return 0;
}
