#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double Geron(double a, double b, double c); /*���������� �����i�- ���������*/
double Geron(double a, double b, double c) { /*��������� �������*/
	double p; /* �������� ��i��� */
	p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));/*��������� ����� i ��������� ���������*/
}
int main() {
	double u, v, w;
	double s;
	printf("Vvedit storonu trikutnika"); /* � ������ ������ �������� 2, 3, 4 */
	scanf("%lf %lf %lf", &u, &v, &w);
	s = Geron(u, v, w); /*����������� �����i� Geron. �� ��������i� a,b,c
	����������� �������� ��i���� u,v,w. ��������� ������� ������������ ��i��i� s*/
	printf("Ploscha 1 trikutnika %lf\n", s);
	s = Geron(10.3, 8.1, 9.7); /* ����������� �����i� Geron. �� ��������i� a,b,c
	����������� ��������� */
	printf("Ploscha 2 trikutnika %lf\n", s);
	s = Geron(u + 10.3, v + w, w * 1.7); /* ����������� �����i� Geron. �� ��������i�
	����������� �������� �����i� */
	printf("Ploscha 3 trikutnika %lf\n", s);
	return 0;
}
