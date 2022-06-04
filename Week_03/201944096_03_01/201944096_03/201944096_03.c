#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char id[12];
	int Kor, Eng, Mat, Tot;
	
	FILE* fin, *fout;
	fin = fopen("c:\\hw\\in.txt", "r");
    fout = fopen("c:\\hw\\201944096_03_02.txt", "w");

    fprintf(fout,"\t\t중간고사 성적 출력\n");
	fprintf(fout, "==================================================\n");
	fprintf(fout, "학번\t국어\t영어\t수학\t총점\t평균\n");
	fprintf(fout, "==================================================\n");

    while (1)
    {
        fscanf(fin, "%s %d %d %d", id, &Kor, &Eng, &Mat);

        Tot = Kor + Eng + Mat;

        fprintf(fout, "%s\t%d\t%d\t%d\t%d\t%.1f\n", id, Kor, Eng, Mat, Tot, (float)Tot / 3.0);

        if (feof(fin))
            break;
    }
    fprintf(fout,"==================================================");

    fclose(fin);
    fclose(fout);
}