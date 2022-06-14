int isalpha(int character)
{
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}