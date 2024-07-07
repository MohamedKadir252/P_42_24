char	*ft_strcpy(char *dest, char *src)
{
    char *dest_ptr = dest;

    while (*src != '\0') {
        *dest_ptr = *src; 
        dest_ptr++;
        src++;
    }
    *dest_ptr = '\0'; 

    return dest;
}
/*
int main(void) {
    char tex[] = "warzaakaalay";
    char cop[30]; // Assurez-vous que cop est suffisamment grand pour contenir tex

    printf("%s\n", ft_strcpy(cop, tex)); // Afficher la chaîne copiée

    return 0;
}*/
