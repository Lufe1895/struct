#include <stdio.h>
int main(int argc, char *argv[]) {
	int matriz[6][6];
	for(int i = 0;i < 6;i++) {
		for(int j = 0;j < 6;j++) {
			scanf("%d",&matriz[i][j]);
		}
	}
	int sm=-1000,jj= 0;
	for(int i = 0;i < 4;i++) {
		int s = 0;
		for(int j = jj;j < jj+3;j++) {
			s+=matriz[i][j];
			if(j==jj) s += matriz[i+1][jj+1];
			s+=matriz[i+2][j];
		}
		jj = (jj < 3) ? jj+1 : 0;
		if(s>sm)sm=s;
		if(jj != 0) i--;
	}
	printf("%d",sm);
	return 0;
}
