 
main()
{
    int I = 0, hasil = 1;
ulang:
    I++;
    hasil *= 2;
    printf("Iterasi ke % 2d : % 5d\n", I, hasil);
    if (I < 10)
        goto ulang;
    getch();
}
