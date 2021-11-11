int main()
{


 int a,b ;
 int som,  mut , sous;
 float op  , divis;
 printf(" entrez a:  " );
    scanf("%d",&a);
printf(" entrez b:  " );
scanf("%d",&b);

 som = a + b ;
 mut = a * b ;
 sous = a - b;
 op = a%b;
 divis = a / b;

printf(" somme est  %d\n soustraction est=  %d\n multiplication = %d\n division=  %.2f\n  reste = %.2f ", som ,sous , mut ,divis , op);


} 