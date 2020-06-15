#include "stdio.h"
#include "stdlib.h"

int main(int argc,char **argv){
	
	FILE *fp1,*fp2;
	char *old,*new,c;
	int i = 0;


	if(argc != 5){
		printf("error:argument account must be 5!\n");
		return 1;
	}
	if( (fp1 = fopen(argv[1],"r"))
			&& (fp2 = fopen(argv[2],"w"))){
		old = argv[3];
		new = argv[4];

		while((c = fgetc(fp1)) != EOF){
			fputc(c,fp2);
			if(c == old[i]){
				++i;
				if(old[i] == '\0'){
					fseek(fp2,-i,SEEK_CUR);
					fputs(new,fp2);
					i = 0;
				}
			}else if(c == old[0]) i = 1;
			else i = 0;
		}
	}

	fclose(fp2);
	fclose(fp1);
	return 0;
}