 main ( )
 {  int  x, y, z ;
     int  gcd (int ,int );                         
     printf("\n input  two  integers:");
     scanf ("%d%d",&x,&y);                     
     z= gcd (x, y);
   printf("greatest  common  divisor  is  %d", z);
 }
int  gcd (int a ,int b)                
   {  int  t ,c ;
      if(a<b)
       {   t=a ;
           a=b;
           b=t ;  }                      
      c= a%b ;
      while (c!=0)
      {  a=b ;
         b=c;
        c=a%b; }                        
    return b;                              
}
