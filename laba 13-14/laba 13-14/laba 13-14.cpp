#include<stdio.h>
#include<math.h>

double Geron(double a, double b, double c); /*���������� �����i�- ���������*/
double fract(int, int);
double factorial(int);
void print_line(char *line, int n);

double Geron(double a, double b, double c) 
{ /*��������� �������*/
    double p; /* �������� ��i��� */
    p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));/*��������� ����� i ��������� ���������*/
}

double fract(int x, int y) {
    double t;
    t = factorial(x + y) / (x * y);
    return t;
}

double factorial(int n) {
    int i;
    double p;
    p = 1;
    for (i = 1; i <= n; ++i)
        p *= i;
    return p;
}

void print_line(char *line,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", line[i]);
    }
}

int main()
{
    // exp 1
    /*
    double u, v, w;
    double s;

    printf("Vvedit storonu trikutnika"); // � ������ ������ �������� 2, 3, 4 
    scanf_s("%lf %lf %lf", &u, &v, &w);

    s = Geron(u, v, w); //����������� �����i� Geron. �� ��������i� a,b,c ����������� �������� ��i���� u,v,w. ��������� ������� ������������ ��i��i� s
    printf("Ploscha 1 trikutnika %lf\n", s);
    s = Geron(10.3, 8.1, 9.7); // ����������� �����i� Geron. �� ��������i� a,b,c ����������� ��������� 
    printf("Ploscha 2 trikutnika %lf\n", s);
    s = Geron(u + 10.3, v + w, w * 1.7); // ����������� �����i� Geron. �� ��������i� ����������� �������� �����i� 
    printf("Ploscha 3 trikutnika %lf\n", s);
    return 0;
    */
    // exp 2
    /*
    int m, n, s;
    scanf_s("%d %d", &m, &n);
    printf("%lf\n", fract(m + 1, n + 1));
    return 0;
    */
    // 
    
    char line[100];
    int sim_numb;

    gets_s(line);

    scanf_s("%d", &sim_numb);

    print_line(line, sim_numb);
    
}



